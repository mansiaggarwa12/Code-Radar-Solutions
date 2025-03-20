#include <stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    int a , b , arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    // int count[n];
    for (a=0;a<n;a++)
    {
        int c=0;
        for (b=0;b<n;b++)
        {
            if (m<c)
            {
                if (arr[a]==arr[b])
                {
                    c++;
                    num=b;
                }
            }
        }
        m=c;
    }
    printf("%d",arr[num]);
}