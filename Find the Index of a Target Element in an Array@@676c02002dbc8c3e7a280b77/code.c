#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    scanf("%d",&k);
    for (a=0;a<n;a++)
    {
        if (k==arr[a])
        {
            printf("%d ",a);
        }
        else 
        {
            printf("-1");
        }
    }
    return 0;
}