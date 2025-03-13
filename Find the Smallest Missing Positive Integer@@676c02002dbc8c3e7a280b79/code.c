#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,arr[n],present[n+1];
    for (a=0;a<n+1;a++)
    {
        present[a]=0;
    }
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
        if (arr[a]>0&&arr[a]<=n)
        {
            present[arr[a]]=1;
        }
    }
    for (a=1;a<=n;a++)
    {
        if (present[a]==0)
        {
            printf("%d",a);
            return 0;
        }
    }
    printf("%d",a+1);
    return 0;


}