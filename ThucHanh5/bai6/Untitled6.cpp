#include<stdio.h>
int main() {
	int n, tong = 0, t = 9;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		tong += t;
		t = t*10 + 9;
	}
	printf("%d", tong);
	return 0;
}
