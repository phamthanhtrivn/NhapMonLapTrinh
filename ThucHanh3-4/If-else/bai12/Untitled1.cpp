#include <stdio.h>
#include<math.h>
int main() {
	int m, y;
	printf("Nhap thang: ");
	scanf("%d", &m);
	printf("Nhap nam: ");
	scanf("%d", &y);
	if (y%4==0 && y%100!=0 || y%400==0) {
		switch (m) {
			case 2:
				printf("29 days");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30 days");
				break;
			default:
				printf("31 days");
		}
	} else {
		switch (m) {
			case 2:
				printf("28 days");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30 days");
				break;
			default:
				printf("31 days");
		}
	}
	return 0;	
}
