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
    for (a=0;a<n;a++)
    {
        int sum=0;
        for (b=a+1;b<n;b++)
        {
            sum+=arr[b];
        }
        arr[a]=sum;
    }
    for (a=0;a<n;a++)
    {
        printf("%d",arr[a]);
    }
    return 0;
}