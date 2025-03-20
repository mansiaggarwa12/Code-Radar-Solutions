#include <stdio.h>
int main()
{
    int n,k;
    scanf ("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    scanf("%d",&k);
    for (a=0;a<n;a++)
    {
        for (b=a;b<n;b++)
        {
            if (arr[a]+arr[b]==k)
            {
                printf("%d %d\n", arr[a], arr[b]);
            }
        }
    }
}