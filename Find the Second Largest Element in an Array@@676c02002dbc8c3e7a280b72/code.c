#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<2)
    {
        printf("-1");
        return 0;
    }
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int max=arr[0],max2=-1;
    for (a=1;a<n;a++)
    {
        if (arr[a]>max)
        {
            max=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]!=max)
        {
            max2=arr[a];
            if (max2==-1||arr[a]>max2)
            {
                max2=arr[a];
            }
        }
    }
        if (max2==-1)
        {
            printf("-1");
            }
        else 
        {
            printf("%d",max2);
        }

    return 0;
}