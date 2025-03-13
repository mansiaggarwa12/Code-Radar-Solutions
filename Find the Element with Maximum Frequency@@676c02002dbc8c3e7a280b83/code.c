#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int arr2[n];
    for (a=0;a<n;a++)
    {
        int count=0;
        for (b=0;b<n;b++)
        {
            if (arr[b]==arr[a])
            {
                count++;
            }
        }
        arr2[a]=count;
    }
    int max=arr2[0];
    for (a=0;a<n;a++)
    {
        if (max<arr2[a])
        {
            max=arr2[a];
        }
    }
    printf("%d",arr2[max]);
    return 0;
}