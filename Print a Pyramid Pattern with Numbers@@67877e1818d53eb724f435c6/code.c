#include <stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<=n;a++)
    {
        for (b=n-a-1;b>0;b--)
        {
            printf(" ");
        }
        for (c=1;c<=a+1;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}