#include<stdio.h>
#include<math.h>
int Prime(int n);
int main() {
	int n;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n<2);
	for (int i = 2; i <= n; i++) {
		if (Prime(n)) {
			printf("%d\t", i);
		}
	}
	return 0;
}

int Prime(int n) {
	if (n<2) {
		return 0;
	} else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n%i==0) {
				return 0;
			}
				return 1;
		}
 	}
}
	
