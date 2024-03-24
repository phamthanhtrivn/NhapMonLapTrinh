#include<stdio.h>
int main() {
	int a, b, c, d;
	printf("Weight - Item1: ");
	scanf("%d", &a);
	printf("No. of item1: ");
	scanf("%d", &b);
	printf("Weight - Item2: ");
	scanf("%d", &c);
	printf("No. of item2: ");
	scanf("%d", &d);
	printf("Gia tri trung binh cua cac mat hang: %f", 1.0*((a*b)+(c*d))/(b+d)); 
	return 0;
}
