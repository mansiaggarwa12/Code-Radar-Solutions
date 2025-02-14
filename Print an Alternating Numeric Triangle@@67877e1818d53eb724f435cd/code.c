#include <stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            if((a+b)%2==0)
            printf(1);
            else 
            printf(0);
        }
        printf("\n");
    }
    return 0;
}