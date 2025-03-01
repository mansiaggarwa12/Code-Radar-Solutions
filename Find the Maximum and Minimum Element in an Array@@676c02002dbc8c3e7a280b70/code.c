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
    int max=arr[0],min=arr[0];
    for (int a=0;a<n;a++)
    {
        for (int b=0;b<n;b++)
        {
            if (arr[a]<arr[b])
            {
                min = arr[a];
            }
            if (arr[a]>arr[b])
            {
                max = arr[a];
            }
        }
    }
    printf ("%d %d", min , max);
    return 0;
}