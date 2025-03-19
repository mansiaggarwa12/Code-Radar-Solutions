#include <stdio.h>
int main()
{
    int n,mono=0;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a+1]>arr[a])
        {
            mono = 1 ;
        }
        else 
        {
            mono = 0 ;
        }
        if (arr[a+1]<arr[a])
        {
            mono = 1 ;
        }
        else 
        {
            mono = 0 ;
        }
    }
    if (mono ==1 )
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
}