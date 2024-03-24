#include<stdio.h>
int main() {
	char n;
	printf("Nhap diem: ");
	scanf("%c", &n);
	switch (n) {
		case 'E':
			printf("Excellent");
			break;
		case 'V':
			printf("Very Good");
			break;
		case 'G':
			printf("Good");
			break;
		case 'A':
			printf("Average");
			break;
		case 'F':
			printf("Fail");
			break;
		default :
			printf("Error!!!!!");
			break;
	}
	return 0;
}
