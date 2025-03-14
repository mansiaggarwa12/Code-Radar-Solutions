#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);        
    }int max;
    for (a=0;a<n;a++)
    {
        
        for (b=n;b>a;b--)
        {
            max = arr[b];
            if (max<arr[b])
            {
                max=arr[b];
            }arr[b]=max;
        }
        
    }
    arr[n-1]=-1;
    for (a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}