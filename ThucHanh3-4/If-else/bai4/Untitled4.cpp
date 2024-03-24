#include<stdio.h>
int main() {
	int x, y;
	printf("Nhap toa do x, y: ");
	scanf("%d%d", &x, &y);
	if (x>0 && y>0) {
		printf("1st Quadrant");
	} else if (x<0 && y>0) {
		printf("2nd Quadrant");
	} else if (x<0 && y<0) {
		printf("3rd Quadrant");
	} else {
		printf("4th Quadrant");
	}
	return 0;
}
