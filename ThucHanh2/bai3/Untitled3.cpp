#include<stdio.h>
#include<math.h>
int main() {
	int x1, y1, x2, y2;
	double khoangcachAB;
	printf("Nhap diem A trong mp toa do XY: ");
	scanf("%d%d", &x1, &y1);
	printf("Nhap diem B trong mp toa do XY: ");
	scanf("%d%d", &x2, &y2);
	khoangcachAB = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("Khoang cach AB: %lf", khoangcachAB);
	return 0;
}
