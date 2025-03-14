#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=n-1;a>0;a--)
    {
        int sum=0;
        for (b=n-1;b>a;b--)
        {
            sum+=arr[b];
        }
        arr[a]=sum;
    }
    for (a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}