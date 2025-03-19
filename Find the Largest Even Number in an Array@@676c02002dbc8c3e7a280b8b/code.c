#include <stdio.h>
int main()
{
    int n,r=-100;
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
    if (r==-100)
    {
        r=-1;
    }
    printf("%d",r);
    return 0;
}