#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int arr[n],vis[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
        vis[a]=0;
    }
    for (a=0;a<n;a++)
    {
        if (vis[a]==1)
        {
            continue;
        }
        int count=1;
        for (int b=a+1;b<n;b++)
        {
            if (arr[a]==arr[b])
            {
                count++;
                vis[b]=1;
            }
        }
        printf("%d %d\n",arr[a],count);
    }
    return 0;
}