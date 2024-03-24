#include<stdio.h>
int main() {
	char kt;
	printf("Nhap 1 ki tu bat ki: ");
	scanf("%c", &kt);
	if (kt>='a' && kt<='z') {
		printf("Ki tu in thuong");
	} else if (kt>='A' && kt<='Z') {
		printf("Ki tu in hoa");
	} else if (kt>='0' && kt<='9') {
		printf("Ki tu so");
	} else {
		printf("Ki tu dac biet");
	}
	return 0;
}
