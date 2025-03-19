#include <stdio.h>
int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]>k)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}