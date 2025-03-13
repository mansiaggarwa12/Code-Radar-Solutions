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
    int index=0;
    for (a=0;a<n;a++)
    {
        if (arr[a]!=0)
        {
            arr[index++]=arr[a];
        }
    }
    while (index<n)
    {
        arr[index++]=0;
    }
    for (a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}
