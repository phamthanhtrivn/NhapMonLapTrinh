#include<stdio.h>
int getRelPos(double x, double y, double r);
int main() {
	double x, y, r;
	printf("Nhap x, y: ");
	scanf("%f%f", &x, &y);
	do {
		printf("Nhap r: ");
		scanf("%f", &r);
	} while (r<0);
	int result = getRelPos(x,y,r);
	if (result==1) {
		printf("Nam trong");
	} else if (result==0) {
		printf("Nam tren");
	} else {
		printf("Nam ngoai");
	}
	return 0;
}

int getRelPos(double x, double y, double r) {
	double d2 = x*x + y*y;
	double r2 = r*r;
	if (d2<r2) {
		return 1;
	} else if (d2==r2) {
		return 0;
	} else 
		return -1;
}
