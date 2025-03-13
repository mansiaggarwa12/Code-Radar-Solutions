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
        int  num =arr[a];
        int sum =0;
        while (num>0)
        {
            int digit = num % 10;
            sum+=digit;
            num/=10;
        }
        arr[a]=sum;
    }
    for (a=0;a<n;a++)
    {
        printf("%d",arr[a]);
    }
    return 0;
}