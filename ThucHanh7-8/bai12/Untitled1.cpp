#include<stdio.h>
#include<math.h>
int PosNegative(int n);
int TongcacUoc(int n);
int soChinhPhuong(int n);
int main() {
	int choice;
	do {
		int n;
		printf("     Menu\n");
		printf("1-Kiem tra so co phai nguyen am hay khong.\n");
		printf("2-Tinh tong cac uoc so cua n.\n");
		printf("3-Kiem tra co phai so chinh phuong hay khong.\n");
		printf("Chon chuc nang: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Nhap n: ");
				scanf("%d", &n);
				PosNegative(n);
				break;
			case 2:
				printf("Nhap n: ");
				scanf("%d", &n);
				TongcacUoc(n);
				break;
			case 3:
				printf("Nhap n: ");
				scanf("%d", &n);
				soChinhPhuong(n);
				break;
		}	
	} while (choice>0 && choice<4);
		
	return 0;
}

int PosNegative(int n) {
	if (n>0) {
		printf("%d la so nguyen duong\n", n);
	} else if (n<0) {
		printf("%d la so nguyen am\n", n);
	} else {
		printf("%d khong am va cung khong duong\n", n);
	}
}

int TongcacUoc(int n) {
	int i, sum = 0;
	for (i = 1; i <= n; i++) {
		if (n%i==0) {
			sum += i;
		}
	}
	printf("Tong cac uoc cua %d la %d\n", n, sum);
}

int soChinhPhuong(int n) {
	int sqr = sqrt(n);
	if (sqr*sqr == n) {
		printf("%d la so chinh phuong\n", n);
	} else {
		printf("%d khong phai la so chinh phuong\n", n);
	}
}











