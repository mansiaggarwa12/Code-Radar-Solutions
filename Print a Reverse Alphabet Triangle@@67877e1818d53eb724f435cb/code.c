#include <stdio.h>
int main()
{
    int a,b,c='A',n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<n-a;b++)
        {
            printf("%c ",c);
            c++;
        }
        c='A';
        printf("\n");
    }
    return 0;
}