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
    for (a=0;a<n/2;a++)
    {
        if (arr[a]!=arr[n-a])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}