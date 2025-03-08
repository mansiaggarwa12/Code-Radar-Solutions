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
    int max=1,count=0;
    for (a=0;a<n;a++)
    {
        for (int b=0;b<n;b++)
        {
            if (arr[a]==arr[b])
            {
                count++;
            }
            if (max<count)
            {
                max=count;
            }
        }
        count=0;
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