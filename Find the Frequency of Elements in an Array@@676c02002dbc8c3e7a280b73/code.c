#include <stdio.h>
int main()
{
    int n,a,b,c=1;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf ("%d",&arr[a]);
    }
    int arr2[n];
    for (a=0;a<n;a++)
    {
        for (b=0;b<c;b++)
        {
            if (arr[a]==arr2[b])
            {
                continue;
            }
            else 
            {
                arr2[c-1]=arr[a];
                c++;
            }
        }
    }
    for (a=0;a<n;a++)
    {
        int freq=0;
        for (b=0;b<n;b++)
        {
            if (arr2[b]==arr[a])
            {
                freq++;
            }
        }
        printf ("%d %d",arr2[b],freq);
    }
    return 0;
}