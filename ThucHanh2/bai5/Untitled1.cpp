#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	double p;
	printf("Nhap canh thu nhat: ");
	scanf("%d", &a);
	printf("Nhap canh thu hai: ");
	scanf("%d", &b);
	printf("Nhap canh thu ba: ");
	scanf("%d", &c);
	p = (a+b+c)/2;
	printf("Chu vi cua tam gac la: %lf\n", p*2);
	printf("Dien tich cua tam gaic la: %lf", sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
