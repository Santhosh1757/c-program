 #include<stdio.h>

int main()
{
    int limit, num, fbig = 0, sbig = 0;

    printf("Enter the limit\n");
    scanf("%d", &limit);

    printf("Enter %d positive numbers\n", limit);
 

    while(limit > 0)
    {
        scanf("%d", &num);

        if(num > fbig)
        {
            sbig = fbig;
            fbig = num;
        }
        if(num > sbig && num < fbig)
        {
            sbig = num;
        }

        limit--;
    }
    printf("Second Big is %d\n", sbig);

    return 0;
}