#include <stdio.h>
int main()
{
    int n,p=0;
    scanf("%d",&n);
    for (int a=2;a<n;a++)
    {
        if (n%a==0)
        {
            p=1;
            break;
        }
    }
    if (p==1)
    {
        printf("Not Prime");
    }
    else if (p==0)
    {
        printf("Prime");
    }
    return 0;
}