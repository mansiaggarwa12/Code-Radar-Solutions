#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        int m = arr[a];
        int sum = 0;
        while (m>0)
        {
            int digit = m % 10;
            sum = sum*10 + digit;
            m = m/10;
        }
        if (arr[a]==sum)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}