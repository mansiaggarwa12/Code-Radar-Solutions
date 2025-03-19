#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",arr[a]);
    }
    for (a=0;a<n;a++)
    {
        arr[a+2]=arr[a]+arr[a+1];
    }
    for (a=0;a<n;a++)
    {
        printf("%d",arr[a]);
    }
    return 0;
}