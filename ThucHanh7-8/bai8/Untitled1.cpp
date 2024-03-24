#include<stdio.h>
int printMinMaxDigits(long n);
int main() {
	long n;
	printf("Nhap n: ");
	scanf("%ld", &n);
	printMinMaxDigits(n);
	return 0;
}

int printMinMaxDigits(long n) {
	int max, min;
	int remainder = 0;
	while (n>0) {
		remainder = n%10;
		n /= 10;
		if (min > remainder) {
			min = remainder;
		}
		if (max < remainder) {
			max = remainder;
		}
	}
	printf("DigitsMax = %d\n", max);
	printf("DigitsMin = %d\n", min);
}
