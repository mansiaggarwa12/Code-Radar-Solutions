#include <stdio.h>
int main()
{
    int a,b,n,c;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=n-a-1;b>0;b--)
        {
            printf(" ");
        }
        for (c=0;c<(2*a)+1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (a=0;a<n-1;a++)
    {
        for (b=0;b<a;b++)
        {
            printf(" ");
        }
        for (c=(2*a)+1;c>0;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}