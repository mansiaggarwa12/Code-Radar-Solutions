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
    int min=arr[0],flag=0,req;
    for (a=0;a<n;a++)
    {
        if (min>arr[a])
        {
            min==arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        if (min+1==arr[a])
        {
            flag=0;
            min++;
            continue;
        }
        else 
        {
            flag=1;
            req=a;
        }
    }
    printf("%d",req+1);
    return 0;
}