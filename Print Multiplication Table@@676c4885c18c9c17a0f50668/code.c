#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a=1;a<11;a++)
    {
        printf("%d x %d = %d",n,a,n*a);
    }
    return 0;
}