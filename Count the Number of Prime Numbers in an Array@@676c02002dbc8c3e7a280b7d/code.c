#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        int prime=0;
        if (arr[a]<=1)
            {
                continue;
            }
        for (int b=2;b*b<=arr[a];b++)
        {
                if (arr[a]%b==0)
                {
                    prime=1;
                    break;
                }
        }
        if (prime==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}