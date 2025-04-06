#include<stdio.h>
int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        sum += a;
    }
    printf("%d",sum);
    return 0;
}