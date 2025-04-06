#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for (a=1;a<n;a++)
    {
        for (int b=n-a-1;b>0;b--)
        {
            printf(" ");
        }
        for (int b=1;b<=a;b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}