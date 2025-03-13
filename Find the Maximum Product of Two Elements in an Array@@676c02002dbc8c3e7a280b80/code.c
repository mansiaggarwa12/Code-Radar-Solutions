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
    int max=arr[0],max2=arr[0],min=arr[0],min2=arr[0];
    for (a=0;a<n;a++)
    {
        if (arr[a]>max)
        {
            max=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]>max2)
        {
            if (arr[a]!=max)
            {
                max2=arr[a];
            }
        }
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]<min)
        {
            min=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]!=min)
        {
            if (arr[a]<min2)
            {
                min2=arr[a];
            }
        }
    }
    if (max*max2>=min*min2)
    {
        printf("%d",max*max2);
    }
    else 
    {
        printf("%d",min*min2);
    }
    return 0;
}