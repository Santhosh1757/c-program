#include<stdio.h>

int main()
{
    double r=0,n,i=1;
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
    r=r+1/i;
    }
    printf("%lf",r);
    return 0;
}    