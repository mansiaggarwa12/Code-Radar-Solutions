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
    int num=1;
    for (a=0;a<n;a++)
    {
        if (arr[a]==num)
        {
            num++;
            break;
        }
        else 
        {
            printf("%d",num);
            break;
        }
    }
    return 0;
}