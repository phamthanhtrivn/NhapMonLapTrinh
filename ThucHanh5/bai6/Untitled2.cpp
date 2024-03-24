#include<stdio.h>

int main(){
	int n;
	int m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < m;i++){
		for(int j = 0; j < n; j++){
			printf("*");
		}
		printf("\n");
	}
}
