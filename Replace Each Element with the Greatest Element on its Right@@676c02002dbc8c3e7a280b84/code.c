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
    for (a=0;a<n;a++)
    {
        for (b=a;b<n;b++)
        {
            if (arr[b]>arr[a])
            {
                arr[a]=arr[b];
            }
        }
    }
    arr[n-1]=-1;
    for (a=0;a<n;a++)
    {
        printf("%d",arr[a]);
        return 0;
    }
}