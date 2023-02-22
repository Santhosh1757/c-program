#include<stdio.h>

int main()
{    int i,n,fact;
    printf("Enter the Number:");
    scanf("%d",&n);
    i=fact=1;
    while(i<=n)
    {
    fact=fact*i;
    i++;
    }
    printf("%d",fact);
    return 0;
}