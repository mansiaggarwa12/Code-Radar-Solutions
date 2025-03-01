#include <stdio.h>
int main()
{
    int n,a,b,min,max;
    scanf("%d",&n);
    int arr[n];
    min=arr[0];
    max=arr[0];
    for (a=0;a<n;a++)
    {
        scanf("%d",&n);
    }
    for (a=0;a<n;a++)
    {
        if (min<arr[a])
        {
            min=arr[a];
        }
        if (max>arr[a])
        {
            max=arr[a];
        }
    }
    pritf("%d %d",min,max);
    return 0;
}