#include<stdio.h>
#include<ctype.h>
int main() {
	char kt;
	printf("Nhap KT IN THUONG: ");
	scanf("%c", &kt);
	printf("Ki tu IN HOA tuong ung la: %c", toupper(kt));
	return 0;
}
