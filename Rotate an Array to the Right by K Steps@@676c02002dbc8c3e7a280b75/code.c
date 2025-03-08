#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int a,arr[n],b;
    for (a=0;a<n;a++)
    {
        scanf("%d",arr[a]);
    }
    scanf("%d",&k);
    k=k%n;
    for (a=0;a<k;a++)
    {
        int last = arr[n-1];
        for (b=n-1;b>0;b--)
        {
            arr[b]=arr[b-1];
        }
        arr[0]=last;
    }
    for (a=0;a<n;a++)
    {
        printf("%d",arr[a]);
    }
    return 0;
}