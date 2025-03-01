#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int min=arr[0];
    int max=arr[0];
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
    printf("%d %d",max,min);
    return 0;
}