#include<stdio.h>
int prime(int n);
long printMinMaxDigits(int n);
int main() {
	int choice, n;
	do {
		printf("   Menu\n");
		printf("1-So nguyen to.\n");
		printf("2-In chu so min, max.\n");
		printf("3-Thoat.\n");
		printf("Chon chu nang: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				printf("Nhap n: ");
				scanf("%d", &n);
				prime(n);
				break;
			case 2:
				do {
					printf("Nhap n: ");
					scanf("%d", &n);
					printMinMaxDigits(n);
					break;
				} while (n<0);
				break;
		} 	
	} while (choice>0 && choice<3);
	return 0;
}

int prime(int n) {
	int count = 0;
	if (n<2) {
		printf("%d ko phai la so nguyen to\n", n);
		printf("-----------------------\n");
	} else {
		for (int i = 1; i <= n; i++) {
			if(n%i==0) {
				count++;
			}
		}
		if (count == 2) {
			printf("%d la so nguyen to\n", n);
			printf("------------------------\n");
		} else {
			printf("%d khong phai la so nguyen to\n", n);
			printf("------------------------\n");
		}
	}
}
long printMinMaxDigits(int n) {
	int max, min;
	int remainder = 0;
	while (n>0) {
		remainder = n%10;
		n /= 10;
		if (min > remainder) {
			min = remainder;
		}
		if (max < remainder) {
			max = remainder;
		}
	}
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	printf("------------------------\n");
}

