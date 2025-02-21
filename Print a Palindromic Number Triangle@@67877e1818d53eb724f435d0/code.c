#include <stdio.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d",&a);
    for (b=0;b<a;b++)
    {
        for (d=a-b-1;d>0;d--)
        {
            printf(" ");
        }
        n=1;
        for (c=0;c<=b;c++)
        {
        
            // printf("%d",n);
            n=n*((b-c)/(c+1));
            printf("%d",n);
        }
        printf("\n");
    }
}