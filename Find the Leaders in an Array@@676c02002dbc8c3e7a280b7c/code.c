#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d".&arr[a]);
    }
    for (a=n;a>0;a--)
    {
        leader = 0;
        for (b=a+1;b<n;b++)
        {
            if (arr[b]>arr[a])
            {
                leader = 1;
            }
            else 
            {
                leader = 0;
            }
        }
        if (leader == 1)
        {
            printf("%d",arr[a]);
        }
    }
    return 0;
}