#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,arr[n],present[n+1];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]>0&&arr[a]<=n)
        {
            present[arr[a]]=1;
        }
    }
    for (a=1;a<=n;a++)
    {
        if (present[arr[a]]==0)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("%d\n",n+1);
    return 0;
}