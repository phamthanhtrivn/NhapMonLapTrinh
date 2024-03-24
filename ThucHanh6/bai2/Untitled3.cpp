#include<stdio.h>
#include<math.h>
int main() {
	int n, astr;
	long tong = 0;
	scanf("%d", &n);
	while (n>0) {
		tong += n%10;
		n /= 10;
		astr += pow(tong,3);
	}
	printf("%ld", tong);
	return 0;
}
