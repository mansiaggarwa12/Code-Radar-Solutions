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
    for (int a =0; a<n;a++)
    {
        if (arr[a]>arr[a-1]&&arr[a]>arr[a+1])
        {
            printf ("%d",arr[a]);
            return 0;
        }
    }
    return 0;
}