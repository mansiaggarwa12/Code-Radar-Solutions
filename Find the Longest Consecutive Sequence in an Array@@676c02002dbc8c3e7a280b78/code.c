#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n],count=0;
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        int c=arr[a];
        for (b=0;b<n;b++)
        {
            if (arr[b]==c)
            {
                for (int d=0;d<n;d++)
                {
                    if (arr[b]==arr[d])
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}