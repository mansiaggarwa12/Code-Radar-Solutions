#include <stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=a;b>0;b++)
        {
            printf(" ");
        }
        for (c=0;c<a;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}