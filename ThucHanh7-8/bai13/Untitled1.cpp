#include<stdio.h>
long long fibo(int n);
int validDate(int d, int m, int y);
int main() {
	int choice;
	printf("----------Menu----------\n");
	printf("1-Fibonacci sequence\n");
	printf("2-Check a date.\n");
	printf("3-Thoat\n");
	do {
		printf("Chon chuc nang: ");
		scanf("%d", &choice);
	} while (choice<0 && choice>3);
	switch (choice) {
		case 1:
			int n;
			do {
				printf("Nhap so hang thu n cua day so Fibonacci: ");
				scanf("%d", &n);
			} while (n<1);
			printf("%lld", fibo(n));
			break;
		case 2:
			int d, m, y;
			printf("Nhap ngay: ");
			scanf("%d", &d);
			printf("Nhap thang: ");
			scanf("%d", &m);
			printf("Nhap nam: ");
			scanf("%d", &y);
			if (validDate(d,m,y)) {
				printf("YES");
			} else {
				printf("NO");
			}
			break;
	}
	return 0;
}

long long fibo(int n) {
	int fibo = 1, t1 = 1, t2 = 1;
	for (int i = 3; i <= n; i++) {
		fibo = t1 + t2;
		t1 = t2;
		t2 = fibo;
	}
	return fibo;	
}

int validDate(int d, int m, int y) {
	int maxd = 31;
	if ( d < 1 || d > 31 || m < 1 || m > 12) {
		return 0;
	}
	if ( m == 4 || m == 6 || m == 9 || m == 11) {
		maxd = 30;
	}
	else if (m==2) {
		if ( y%400==0 ||( y % 4 == 0 && y % 100 != 0)) {
			maxd = 29;
		} else {
			maxd = 28;
		}
	}
	return d<=maxd;
}
