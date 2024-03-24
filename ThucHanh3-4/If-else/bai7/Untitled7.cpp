#include<stdio.h>
int main() {
	char kt;
	printf("Nhap 1 ki tu bat ki: ");
	scanf("%c", &kt);
	if (kt=='a' || kt=='o' || kt=='e' || kt=='i' || kt=='u') {
		printf("Ki tu %c vua nhap la nguyen am", kt);
	} else {
		printf("Ki tu %c vua nhap la phu am", kt);
	}
	return 0;
}
