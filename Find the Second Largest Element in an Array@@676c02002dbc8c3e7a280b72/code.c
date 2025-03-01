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
    int max=arr[0],max2=arr[0];
    for (a=0;a<n;a++)
    {
        if (max<arr[a])
        {
            max=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (max2>arr[a])
        {
            max2=arr[a];
        }
    }
    printf ("%d",max2);
    return 0;
}