#include<stdio.h>
#include<math.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void nt(int a[], int n);
void KhoangAB(int a[], int n);
float ave(int a[], int n);
void TimX(int a[], int n);
int Demso(int a[], int n);
void Thaydoisole(int a[], int n);
int main() {
	int a[100], n;
	do {
		printf("Nhap phan tu mang thu n: ");
		scanf("%d", &n);
	} while (n < 0 && n > 99);
	nhapMang(a,n);
	printf("Mang vua nhap la: ");
	xuatMang(a,n);
	nt(a,n);
	KhoangAB(a,n);
	printf("\nGai tri trung binh cua mang la: %.1f", 1.0*ave(a,n));
	printf("\nSo luong phan tu co chu so tan cung la 6 va chi het cho 4 la: %d", Demso(a,n));
	Thaydoisole(a,n);
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
int ktrNT(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i==0) {
			return 0;
		}
	}
	return n>1;
}
void nt(int a[], int n) {
	printf("\nCac so nguyen to trong mang la: ");
	for (int i = 0; i < n; i++) {
		if (ktrNT(a[i])) {
			printf("%d ", a[i]);
		}
	}
}
void KhoangAB(int a[], int n) {
	int A, B;
	printf("\nNhap [a,b]: ");
	scanf("%d%d", &A, &B);
	printf("Cac gia tri cua mang nam trong khoang [a,b]: ");
	for (int i = 0; i < n; i++) {
		if (a[i] >= A && a[i] <= B) {
			printf("%d ", a[i]);
		}
	}
}
float ave(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum/n;
}
int Demso(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 10 == 6 && a[i] % 4 == 0) {
			count++;
		}
	}
	return count;
}
void Thaydoisole(int a[], int n) {
	int odd = 0;
	printf("\nThay cac phan tu le bang 2 lan gia tri cua no: ");
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			printf("%d ", a[i]*2);
		}
	}
	return ;
}
void TimX(int a[], int n) {
	int x;
	printf("\nNhap gia tri can tim: ");
	scanf("%d", &x);
	printf("Gia tri can tim trong mang nam o vi tri: ");
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			printf("%d", i);
		}
	}
}


