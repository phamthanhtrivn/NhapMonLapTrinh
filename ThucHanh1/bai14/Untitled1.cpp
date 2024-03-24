include<stdio.h>
#include<string.h>
struct CUAHANG{
	char maNhim[8];
	char HegSpe[15];
	long Price;
	int Quantity;
	long thanhTien;
};
struct NODE{
	CUAHANG data;
	NODE *pNext; 
};
struct LIST{
	NODE *pHead;
	NODE *pTail;
};
void Menu();
void iNit(LIST &L);
NODE *getNODE(CUAHANG x);
void addLast(LIST &L, NODE *p);
void insertLast(LIST &L, CUAHANG x);
void tinhTien(LIST &L);
void nhap1Nhim(CUAHANG &x);
void xuat1Nhim(NODE *p);
void nhapDSNhim(LIST &L, int n);
void xuatDSNhim(LIST L);
int timLonNhat(LIST L);
void inLonNhat(LIST L);
void ghiFILE(LIST L, char filename[]);
void docFILE(LIST &L, char filename[]);
void sapXep(LIST &L);
int main(){
	int n,key;
	LIST L;
	char filename[13] = "inphantu.txt";
	iNit(L);
	do{
		Menu();
		printf("Lua chon? ");
		scanf("%d",&key);
		switch(key){
		case 1:
		printf("So luong phan tu? ");
		scanf("%d",&n);
		nhapDSNhim(L,n);
			break;
		case 2:
		tinhTien(L);
		break;
		case 3:
		xuatDSNhim(L);
			break;
		case 4:
		inLonNhat(L);
			break;
		case 5:
		ghiFILE(L,filename);
			break;
		case 6:
		LIST L2;
		iNit(L2);
		//docFILE(L2,filename);
			break;
		case 7:
		sapXep(L);
		xuatDSNhim(L);
			break;
		case 8:
			
			break;
		}
	} while(key != 10);
}
void Menu(){
	printf("\n\n\t\t MENU\n");
	printf("1.Nhap danh sach n phan tu:\n");
	printf("2.Tinh Tien:\n");
	printf("3.Xuat danh sach:\n");
	printf("4.In phan tu lon nhat:\n");
	printf("5.Xuat ra file text:\n");
	printf("6.Doc file:\n");
	printf("7.Sap xep danh sach tang dan:\n");
	printf("8.Xoa phan tu theo ma:\n");
	printf("9.sua phan tu theo ma:\n");
	printf("10. KET THUC!!\n\n");
}
void iNit(LIST &L){
	L.pHead = L.pTail = NULL ;
}
NODE *getNODE(CUAHANG x){
	NODE *new_Node;
	new_Node = new NODE;
	if(new_Node == NULL)
		return NULL;
	else{
		new_Node->data = x;
		new_Node->pNext = NULL;
	}
	return new_Node;
}
void addLast(LIST &L, NODE *p){
	if(NULL == L.pHead)
		L.pHead = L.pTail = p;
	else{
		L.pTail->pNext = p;
		L.pTail = p;
	}
}
void insertLast(LIST &L, CUAHANG x){
	NODE *new_Node = getNODE(x);
	if(new_Node == NULL)
		return;
	else
		addLast(L,new_Node);
}
void tinhTien(LIST &L){
	NODE *p = L.pHead;
	while(p!= NULL){
		p->data.thanhTien = p->data.Price * p->data.Quantity;
		p = p->pNext;
	}		
}
void nhap1Nhim(CUAHANG &x){
	fflush(stdin);
	printf("\nMa Nhim? ");
	gets(x.maNhim);
	printf("Loai? ");
	gets(x.HegSpe);
	printf("Gia? ");
	scanf("%d",&x.Price);
	printf("So luong? ");
	scanf("%d",&x.Quantity);
	fflush(stdin);
	
}
void xuat1Nhim(NODE *p){
	printf("Ma Nhim: %s\n",p->data.maNhim);
	printf("Loai: %s\n",p->data.HegSpe);
	printf("Gia: %d\n",p->data.Price);
	printf("So luong: %d\n",p->data.Quantity);
	printf("Thanh Tien: %d\n\n",p->data.thanhTien);
}

void nhapDSNhim(LIST &L, int n){
	for(int i = 0; i < n; i++){
		CUAHANG x;
		nhap1Nhim(x);
		insertLast(L,x);
	}
}
void xuatDSNhim(LIST L){
	NODE *p = L.pHead;
	while(p != NULL){
		xuat1Nhim(p);
		p= p->pNext;
	}
}
int timLonNhat(LIST L){
	int index = 0;
	NODE *p = L.pHead;
	while(p != NULL){
		if(p->data.Quantity > index)
			index = p->data.Quantity;
		p= p->pNext;
	}
	return index;
}
void inLonNhat(LIST L){
	int index = timLonNhat(L);
	NODE *p = L.pHead;
	while(p !=  NULL){
		if(p->data.Quantity == index){
			xuat1Nhim(p);
		}
		p = p->pNext;
	}
}
void ghiFILE(LIST L, char filename[]){
	FILE *fout = fopen(filename,"w");
	NODE *p = L.pHead;
	if(!fout) return;
	while(p!= NULL){
		fprintf(fout,"%s %s %d %d\n",p->data.maNhim,p->data.HegSpe,p->data.Price,p->data.Quantity);		
		p = p->pNext;
	}
	fclose(fout);
}
void docFILE(LIST L, char filename[]){
	FILE *fin = fopen(filename,"r");
	NODE *p = L.pHead;
	if(!fin) return;
	while(p!= NULL){
		fscanf(fin,"%s %s %d %d %d\n",p->data.maNhim,p->data.HegSpe,p->data.Price,p->data.Quantity);		
	}
	fclose(fin);
	 
}
void sapXep(LIST &L){
	for(NODE *p = L.pHead; p != L.pTail; p = p->pNext)
	{
		for(NODE *q = p->pNext; q != NULL; q = q->pNext){
			if(strcmp(p->data.HegSpe,q->data.HegSpe) > 0){
				NODE *x;
				strcpy(x->data.HegSpe,p->data.HegSpe);
				strcpy(p->data.HegSpe,q->data.HegSpe);
				strcpy(q->data.HegSpe,x->data.HegSpe);
				
				strcpy(x->data.maNhim,p->data.maNhim);
				strcpy(p->data.maNhim,q->data.maNhim);
				strcpy(q->data.maNhim,x->data.maNhim);
				
				x->data.Price = p->data.Price;
				p->data.Price = q->data.Price;
				q->data.Price = x->data.Price;
				
				x->data.Quantity = p->data.Quantity;
				p->data.Quantity = q->data.Quantity;
				q->data.Quantity = x->data.Quantity;
				
				x->data.thanhTien = p->data.thanhTien;
				p->data.thanhTien = q->data.thanhTien;
				q->data.thanhTien = x->data.thanhTien;
			}
		}
	}
}
