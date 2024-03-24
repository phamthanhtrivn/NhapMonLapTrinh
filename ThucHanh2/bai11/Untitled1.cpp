#include<stdio.h>
#include<math.h>
#define PI 3.14
int main() {
	float S, V;
	scanf("%f", &S);
	V = (4*PI*sqrt(pow(S/(4*PI),3)))/3;
	printf("%f", V);
	return 0;
}
