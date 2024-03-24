#include<stdio.h>
#include<math.h>
int main() {
	int a, b, c;
	printf("Nhap 3 canh cua tam giac: ");
	scanf("%d%d%d", &a , &b, &c);
	if ( a+b>c && b+c>a && a+c>b) {
		if (a==b && b==c && c==a) {
			printf("Tam giac deu");
		} else if (a==b || b==c || c==a) {
			printf("Tam giac can");
		} else if (pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2) || pow(c,2)==pow(b,2)+pow(a,2)) {
			printf("Tam giac vuong");
		} else {
			printf("Tam giac thuong");
		}
	} else {
		printf("Day ko phai 3 canh cua tam  giac");
	}
	return 0;
}
