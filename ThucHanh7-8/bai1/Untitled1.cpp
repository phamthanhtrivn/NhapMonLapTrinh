#include<stdio.h>
long giaithua(int n);
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	giaithua(n);
	return 0;
}

long giaithua(int n) {
	long giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	printf("%d! = %ld", n, giaithua);
}
