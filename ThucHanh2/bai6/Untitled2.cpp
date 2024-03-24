#include<stdio.h>
int main() {
	int a, b;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
		a = a + b;
		b = a - b;
		a = a - b;
	printf("a = %d, b = %d", a, b);
	return 0;
}
