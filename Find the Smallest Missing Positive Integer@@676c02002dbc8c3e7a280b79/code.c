#include <stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int min =arr[0],index=0;
    for (a=0;a<n;a++)
    {
        if (min>arr[a])
        {
            min=arr[a];
        }
    }
    for (a=0;a<n;a++)
    {
        for (b=0;b<n;b++)
        {
            if (min+1==arr[b])
            {
                flag=1;
                min++;
                continue;
            }
            else 
            {
                index=b;
            }

        }
    }
    printf("%d",arr[index]+1);
    return 0;
}