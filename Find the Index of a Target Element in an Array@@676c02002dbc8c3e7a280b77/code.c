#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a,arr[n],m=0;
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
            m=1;
        }
    }
    if (m=0)
    {
        printf("-1");
    }
    return 0;
}