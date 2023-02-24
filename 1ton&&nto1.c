#include<stdio.h>

int main()
{
   int i=1,j,n;
    scanf("%d",&n);
    for(i=1,j=n;i<=n&&j>=1;i++,j--)
    {
    printf("%d %d\n",i,j);
    
    }
    return 0;
}