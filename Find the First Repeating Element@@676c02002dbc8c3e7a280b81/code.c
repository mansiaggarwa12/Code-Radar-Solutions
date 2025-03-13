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
        for (b=a+1;b<n;b++)
        {
            if (arr[b]==arr[a])
            {
                printf("%d",arr[a]);
                return 0;
            }
        }
    }
    return 0;
}