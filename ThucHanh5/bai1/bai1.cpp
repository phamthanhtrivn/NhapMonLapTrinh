#include<stdio.h>
int main() {
	int n,tong = 0;
	float ave;
	for (int i  = 1; i <= 10; i++) {
		scanf("%d", &n);
		
	}
	tong += n;
	ave = (float)tong/10;
	printf("Sum = %d\n", tong);
	printf("Average = %.2f", ave);
	return 0;
}
