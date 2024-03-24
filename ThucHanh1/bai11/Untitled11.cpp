#include<stdio.h>
int main() {
	int tu1, mau1, tu2, mau2;
	printf("Nhap ps thu nhat: ");
	scanf("%d%d", &tu1, &mau1);
	printf("Nhap ps thu hai: ");
	scanf("%d%d", &tu2, &mau2);
	printf("Tong cua hai ps la: %d/%d", (tu1*mau2)+(tu2*mau1), mau1*mau2);
	return 0;
}
