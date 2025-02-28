#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int max=arr[0];min=arr[0]
    for (int a=0;a<n;a++)
    {
        if (arr[a]<arr[a+1])
        {
            min=arr[a];
        }
        if (arr[a]>arr[a+1])
        {
            max=arr[a];
        }
    }
    printf ("%d %d", min , max);
    return 0;
}