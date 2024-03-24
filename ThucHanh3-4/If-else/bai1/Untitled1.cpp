#include<stdio.h>
int main() {
	int n, T;
	printf("So luong mua dia DVD: ");
	scanf("%d", &n);
	T = n*5000;
	if (n<=10) {
		printf("So tien phai tra la: %d", T);
	} else if (n>10) {
		printf("So tien phai tra la: %.1f", (float)T-T*0.1);
	} else {
		printf("Nhap lai!");
	}
	return 0;
}
