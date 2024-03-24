#include<stdio.h>
int main() {
	int ngay;
	printf("Nhap so ngay: ");
	scanf("%d", &ngay);
	printf("So nam: %d\n", ngay/365);
	printf("So tuan: %d\n", (ngay%365)/7);
	printf("So ngay: %d", (ngay/365)%7);
	return 0;
}
