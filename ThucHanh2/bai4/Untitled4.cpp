#include<stdio.h>
#include<math.h>
int main() {
	double a, b, dientich, canhhuyen;
	printf("Nhap cgv1: ");
	scanf("%lf", &a);
	printf("Nhap cgv2: ");
	scanf("%lf", &b);
	dientich = (a*b)/2;
	canhhuyen = sqrt((a*a)+(b*b));
	printf("Dien tich tam giac vuong la: %lf\n", dientich);
	printf("Canh huyen tam giac vuong la: %lf", canhhuyen);
	return 0;
}
