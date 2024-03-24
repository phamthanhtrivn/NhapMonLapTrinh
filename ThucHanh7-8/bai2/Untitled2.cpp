#include<stdio.h>
long long fibo(int n);
int main() {
	int n;
	do {
		printf("Nhap so hang thu n cua day so Fibonacci: ");
		scanf("%d", &n);
	} while (n<1);
	printf("%lld", fibo(n));
	return 0;
}

long long fibo(int n) {
	int fibo = 1, t1 = 1, t2 = 1;
	for (int i = 3; i <= n; i++) {
		fibo = t1 + t2;
		t1 = t2;
		t2 = fibo;
	}
	return fibo;	
}
