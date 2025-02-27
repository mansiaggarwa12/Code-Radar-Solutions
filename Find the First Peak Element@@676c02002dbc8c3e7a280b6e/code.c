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
    if (arr[0]>arr[1])
    {
        printf("%d",arr[0]);
        return 0;
    }
    if (arr[n-1]>arr[n-2])
    {
        printf("%d",arr[n-1]);
        return 0;
    }
    for (int a =1; a<n-1;a++)
    {
        if (arr[a]>arr[a-1]&&arr[a]>arr[a+1])
        {
            printf ("%d",arr[a]);
            return 0;
        }
    }
    return 0;
}