#include<stdio.h>
int main() {
	int cannang;
	float chieucao;
	printf("Nhap can nang cua ban: ");
	scanf("%d", &cannang);
	printf("Nhap chieu cao cua ban: ");
	scanf("%f", &chieucao);
	printf("Chi so BMI cua ban la: %f", cannang/(chieucao*chieucao));
	return 0;
}
