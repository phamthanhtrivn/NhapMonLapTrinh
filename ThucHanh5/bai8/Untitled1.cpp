#include<stdio.h>
int main() {
	int n, S = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n%2==0) {
			if (i%2==0) {
				S += i;
			}
		} else {
			if (i%2!=0) {
				S += i;
			}
		}
	}
	printf("%d", S);
	return 0;
}
