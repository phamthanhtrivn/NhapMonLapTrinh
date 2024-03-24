#include<stdio.h>
long sumDigits(int n);
int main() {
	int n;
	long s;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
		if (n>=0) {
			s = sumDigits(n);
			printf("%ld\n", s);
		}
	} while (n>=0);
	return 0;
}

long sumDigits(int n) {
	long sumDigits = 0;
	do {
		sumDigits += n%10 ;
		n /= 10;
	} while (n>0);
	return sumDigits;
}
