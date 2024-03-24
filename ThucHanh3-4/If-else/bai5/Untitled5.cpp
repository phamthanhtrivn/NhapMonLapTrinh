#include<stdio.h> 
#include<math.h>
int main() {
	int a, b, c, D;
	printf("Nhap gia tri cau a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	D = pow(b,2)-4*a*c;
	if (D<0) {
		printf("PT vo nghiem");
	} else if (D==0) {
		float x = (float)(-b)/(2*a);
		printf("PT co 1 nghiem kep x = %.2f", x); 
	} else {
		float x1 = (float)(-b+sqrt(D))/(2*a), x2 = (float)(-b-sqrt(D))/(2*a);
		printf("PT co 2 nghiem x1 = %.2f, x2 = %.2f", x1, x2);
	}
	return 0;
}
