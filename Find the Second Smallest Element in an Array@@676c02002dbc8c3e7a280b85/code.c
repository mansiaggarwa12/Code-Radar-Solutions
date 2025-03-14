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
    int min=arr[0],min2=100;
    for (a=0;a<n;a++)
    {
        if (arr[a]<min)
        {
            min=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]<min2)
        {
            if (min!=arr[a])
            {
                min2=arr[a];
            }
        }
    }
    if (min2==100)
    {
        min2=-1;
    }
    printf("%d",min2);
    return 0;
}