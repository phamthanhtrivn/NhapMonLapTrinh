#include<stdio.h>
int main() {
	float n;
	printf("Nhap diem thi theo tang diem 10: ");
	scanf("%f", &n);
	if (n<=10 && n>=8.5) {
		printf("A");
	} else if (n<=8.4 && n>=7.0) {
		printf("B");
	} else if (n<=6.9 && n>=5.5) {
		printf("C");
	} else if (n<=5.4 && n>=4.0) {
		printf("D");
	} else if (n<4.0) {
		printf("F");
	}
	return 0;
}
