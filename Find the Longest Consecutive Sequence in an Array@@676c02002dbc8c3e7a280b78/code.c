#include <stdio.h>
int main()
{
    int n,count=1;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        for (int b=0;b<n;b++)
        {
            if (arr[a]+1==arr[b])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}