#include <stdio.h>
int main ()
{
    int a,b,c,n;
    scanf("%d",&n);
    c='A';
    for (a=1;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
        c='A';
    }
    return 0;
}