#include<stdio.h>
int main() {
	int n;
	long long giaithua = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	printf("Giai thua cua %d! la %d", n, giaithua);
	return 0;
}
