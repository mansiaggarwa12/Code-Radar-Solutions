#include <stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&a);
    for (b=0;b<a;b++)
    {
        for (c=0;c<=b;c++)
        {
            printf("%d",n);
            n=n*(b-c)/(c+1);
        }
        printf("\n");
    }
}