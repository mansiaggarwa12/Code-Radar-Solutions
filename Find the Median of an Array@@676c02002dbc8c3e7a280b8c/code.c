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
    for (a=0;a<n;a++)
    {
        for (b=0;b<n;b++)
        {
            if (arr[a]<arr[b])
            {
                int temp = arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    if (n%2==1)
    {
        printf("%d",arr[n/2]);
    }
    else 
    {
        int med=(arr[n/2]+arr[n/2-1])/2;
        printf("%d",med);
    }
    return 0;
}