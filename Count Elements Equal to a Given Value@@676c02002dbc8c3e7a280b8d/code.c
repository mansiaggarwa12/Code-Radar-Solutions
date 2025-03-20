#include <stdio.h>
int main()
{
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
        if (arr[a]==k)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}