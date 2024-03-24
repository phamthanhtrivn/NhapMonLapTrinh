#include<stdio.h>
#include<math.h>
void nhapMang(float a[], int n);
void xuatMang(float a[], int n);
float average(float a[], int n);
long TongBP(float a[], int n);
double Variance(float a[], int n);
double StandardDeviation(float a[], int n);
int main() {
	float a[100];
	int n;
	printf("Nhap phan tu thu n cua mang: ");
	scanf("%d", &n);
	nhapMang(a,n);
	printf("Mang vua nhap la: ");
	xuatMang(a,n);
	printf("\nGia tri trung binh cua mang la: %.1f", average(a,n));
	printf("\nTong binh phuong cua mang la: %ld", TongBP(a,n));
	printf("\nPhuong sai cua mang la: %.2lf", Variance(a,n));
	printf("\nDo lech chuan cua mang la: %.3lf", StandardDeviation(a,n));
	return 0;
}

void nhapMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
} 

void xuatMang(float a[], int n) {
	for (int i = 0; i < n ; i++) {
		printf("%.1f ", a[i]);
	}
}

float average(float a[], int n) {
	float m;
	for (int i = 0; i < n; i++) {
		m += a[i];
	}
	return m/n;
}

long TongBP(float a[], int n) {
	long ss;
	for (int i = 0; i < n; i++) {
		ss += pow(a[i],2);
	}
	return ss;
}

double Variance(float a[], int n) {
	double d2;
	long ss = 0;
	float m = 0;
	for (int i = 0; i < n; i++) {
		ss += pow(a[i],2);
	}
	for (int i = 0; i < n; i++) {
		m += a[i];
	}
	for (int i = 0; i < n; i++) {
		d2 = (ss/n) - pow(m/n,2);
	}
	return d2;
}

double StandardDeviation(float a[], int n) {
	double d;
	long ss = 0;
	float m = 0;
	for (int i = 0; i < n; i++) {
		ss += pow(a[i],2);
	}
	for (int i = 0; i < n; i++) {
		m += a[i];
	}
	for (int i = 0; i < n; i++) {
		d = sqrt((ss/n) - pow(m/n,2));
	}
	return d;
}



