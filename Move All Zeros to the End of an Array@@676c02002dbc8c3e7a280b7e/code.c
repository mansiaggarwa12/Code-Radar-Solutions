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
    for (a=0;a<n;a++)
    {
        for (int b=a;b<n;b++)
        {
            if(arr[a]==0)
            {
                arr[b]=arr[b+1];
                arr[n-1]=0;
            }
           
        }
    }
    for (a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
    return 0;
}
