#include<stdio.h>

int main()
{    int i,n,f;
    printf("Enter the num");
    scanf("%d",&n);
    i=f=1;
    while(i<=n)
    {
    f=f*i;
    i++;
    }
    printf("%d",f);
    return 0;
}