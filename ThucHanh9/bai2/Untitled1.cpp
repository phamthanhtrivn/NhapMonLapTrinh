#include<stdio.h>
#include<math.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void inNT(int a[], int n);
void KhoangAB(int a[], int n);
int SumEven(int a[], int n);
void TimX(int a[], int n);
int main() {
	int a[100], n;
	printf("Nhap phan tu thu n cua mang: ");
	scanf("%d", &n);
	nhapMang(a,n);
	printf("Mang vua nhap la: ");
	xuatMang(a,n);
	inNT(a,n);
	KhoangAB(a,n);
	printf("\nTong cac so chan trong mang la: %d", SumEven(a,n));
	TimX(a,n);
	return 0;
}

void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int ktraNT(int n) {
	int count = 0;
	if (n<2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i==0) {
				count++;
			}
		}
		if (count==0) {
			return 1;
		} else {
			return 0;
		}
	}
}
void inNT(int a[], int n) {
	printf("\nCac so nguyen to trong mang la: ");
	for (int  i = 0; i < n; i++) {
		if (ktraNT(a[i])==1) {
			printf("%d ", a[i]);
		}
	}
}
void KhoangAB(int a[], int n) {
	int A, B;
	printf("\nNhap [a,b]: ");
	scanf("%d%d", &A, &B);
	printf("Cac so cua mang trong khoang [a;b]: ");
	for (int i = 0; i < n; i++) {
		if (a[i] >= A && a[i] <= B) {
		printf("%d ", a[i]);
		}
	}
}
int SumEven(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			sum += a[i];
		}
	}
	return sum;
}
void TimX(int a[], int n) {
	int x;
	printf("\nNhap gia tri can tim: ");
	scanf("%d", &x);
	printf("Gia tri can tim nam o vi tri: ");
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d ", i);
		}
	}
}
