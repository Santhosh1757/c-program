#include<stdio.h>
int main()
{
      int num,i=1,c=0;
      printf("/*To Check Number Prime or Not*/\n\nEnter Number : ");
      scanf("%d",&num);
      while(i<=num)
      {
            if(num%i==0){
            c++;
             }
            i++;
      }
      if(c==2)
            printf("\n%d is Prime Number",num);
      else
            printf("\n%d is Not Prime Number",num);
      return 0;
}