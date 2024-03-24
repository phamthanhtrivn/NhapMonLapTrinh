#include <stdio.h>

int main(){
	int n;
	float math = 0;
	scanf("%d",&n);
	float sum1 = 1,sum2 =1;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0)
			sum1 -= (i/(i+1));
		else
			sum2 += (i/(i+1));
	}
	printf("%f",sum1 + sum2);
}
