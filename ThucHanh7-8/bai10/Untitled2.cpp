#include<stdio.h>
#include<math.h>
long giaithua( int n);
int main() {
	double x, s = 0;
	int n;
	printf("Nhap so thuc x: ");
	scanf("%lf", &x);
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		s += 1.0*pow(x,i)/giaithua(n);
	}
	printf("%lf", s);
	return 0;
}

long giaithua( int n) {
	int i;
	long giaithua = 1;
	for (i = 1; i <= n; i++) {
		giaithua *= i;
	}
	return giaithua;
}
