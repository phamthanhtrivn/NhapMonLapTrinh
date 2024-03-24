#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= abs(n); i++) {
		if (n%i==0) {
			printf("%d\t", i);
		}
	}
	return 0;
}
