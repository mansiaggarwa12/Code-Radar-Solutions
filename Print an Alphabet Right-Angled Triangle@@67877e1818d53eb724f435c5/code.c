#include <stdio.h>
int main ()
{
    int a,b,c,n;
    scanf("%d",&n);
    c='A';
    for (a=0;a<n;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
        c='A';
    }
    return 0;
}