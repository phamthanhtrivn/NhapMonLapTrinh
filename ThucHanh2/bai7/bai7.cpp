#include<stdio.h>
int main() {
	int a = 123, b = 456;
	printf("      %d\n", a);
	printf("    x %d\n", b);
	printf("---------------\n");
	printf("      %d\n", a*(b%10));
	printf("     %d\n", a*(b/10%10));
	printf("    %d\n", a*(b/100));
	printf("---------------\n");
	printf("    %d", a*b);
	return 0;
}
