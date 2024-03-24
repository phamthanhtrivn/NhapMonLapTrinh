#include<stdio.h>
int main() {
	int n;
	long long giaithua = 1;
	printf("Nhap So nguyenn: ");
	scanf("%d", &n);
	for (int i = 1 ; i <= n; i++) {
		giaithua *= i;
	}
	printf("Giaithua cua %d! la %lld", n, giaithua);
	return 0;
}
