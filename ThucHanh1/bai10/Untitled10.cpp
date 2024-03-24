#include<stdio.h>
int main() {
	int giay;
	printf("Nhap so giay: ");
	scanf("%d", &giay);
	printf("So gio: %d\n", giay/3600);
	printf("So phut: %d\n", (giay/60)%60);
	printf("So giay: %d", giay%60);
	return 0;
}
