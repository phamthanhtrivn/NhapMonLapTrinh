#include<stdio.h>
int main() {
	int n;
	printf("So luong ao can mua: ");
	scanf("%d", &n);
	if (n<=3) {
		printf("So tien can phai tra la: %d", n*120000);
	} else if (n>=4 && n<=6) {
		printf("So tien can phai tra la: %d", n*90000);
	} else if (n>=7 && n<=10) {
		printf("So tien can phai tra la: %d", n*85000);
	} else if (n>=11) {
		printf("So tien can phai tra la: %d", n*70000);
	}
	return 0;
}
