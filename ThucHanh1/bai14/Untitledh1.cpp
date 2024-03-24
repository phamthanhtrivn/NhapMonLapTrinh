#include<stdio.h>
void solving(unsigned long long n){
    int k = -1; // 1 bat, -1 tat
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            k *= -1;
    if(k == 1)
        printf("YES");
    else
        printf("NO");
}
int main(){
    unsigned long long n;
    scanf("%ld",&n);
    solving(n);
    return 0;
}
