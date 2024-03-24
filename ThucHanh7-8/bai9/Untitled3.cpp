#include<stdio.h>
#include<math.h>
int Tamgiac(int a, int b, int c);
int main() {
	int a, b, c;
	float p = 0;
	float S = 0;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	do {
		printf("Nhap a, b, c: ");
		scanf("%d%d%d", &a, &b, &c);
	} while (a<0 || b<0 || c<0);
	if (Tamgiac(a,b,c)) {
		printf("%f", S);
	} 
	return 0;
}

int Tamgiac(int a, int b, int c) {
	float p = 0;
	if (a+b>c || a+c>b || b+c>a) {
		p = 1.0*(a+b+c)/2;
	} else {
		printf("%d, %d, %d ko phai la 3 canh cua tam giac", a, b, c);
	}
}
