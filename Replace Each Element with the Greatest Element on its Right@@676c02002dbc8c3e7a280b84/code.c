#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);        
    }int max=arr[0];
    for (a=0;a<n;a++)
    {        
        for (b=n-1;b>a;b--)
        {
            
            if (max<arr[b])
            {
                max=arr[b];
            }
        }
        arr[a]=max;
    }
    arr[n-1]=-1;
    for (a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}