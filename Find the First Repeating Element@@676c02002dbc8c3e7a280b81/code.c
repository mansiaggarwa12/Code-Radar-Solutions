#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,r=0,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n;b++)
        {
            if (arr[b]==arr[a])
            {
                printf("%d",arr[a]);
                r=1;
                return 0;
            }
        }
    }
    if (r==0)
    {
        printf("-1");
    }
    return 0;
}