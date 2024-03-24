#include<stdio.h>
int main() {
	int a, b, c, d, e, f, g, bieuthuc;
	printf("Nhap gia tri cau a: ");
	scanf("%d", &a);
	printf("Nhap gia tri cau b: ");
	scanf("%d", &b);
	printf("Nhap gia tri cau c: ");
	scanf("%d", &c);
	printf("Nhap gia tri cau d: ");
	scanf("%d", &d);
	printf("Nhap gia tri cau e: ");
	scanf("%d", &e);
	printf("Nhap gia tri cau f: ");
	scanf("%d", &f);
	printf("Nhap gia tri cau g: ");
	scanf("%d", &g);
	bieuthuc = ((a + b / c * d - e) * (f - g));
	printf("((a + b / c * d - e) * (f - g)) = %d", bieuthuc);
	return 0;
}
