#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int max=0,count=1;
    for (a=0;a<n;a++)
    {
        if (arr[a]==arr[a+1])
        {
            count++;
        }
        if (max<count)
        {
            max=count;
        }
        count=1;
    }
    if (max>=n/2)
    {
        printf("%d",max);
    }
    else 
    {
        printf("-1");
    }
    return 0;
}