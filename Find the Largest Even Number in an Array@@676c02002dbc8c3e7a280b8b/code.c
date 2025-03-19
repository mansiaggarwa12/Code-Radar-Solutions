#include <stdio.h>
int main()
{
    int n,r=-1;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]%2==0&&arr[a]>r)
        {
            r=arr[a];
        }
    }
    printf("%d",r);
    return 0;
}