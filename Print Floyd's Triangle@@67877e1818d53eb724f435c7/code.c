#include <stdio.h>
int main()
{
    int a,b,n,m=1;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}