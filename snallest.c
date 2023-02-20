#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter a number (0 to exit): ");
    scanf("%d", &n);
    int min = n;
  
    while (n != 0)
    {
        if (min > n)
        {
            min = n;
        }
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
    }
    printf("Min is: %d", min);
}