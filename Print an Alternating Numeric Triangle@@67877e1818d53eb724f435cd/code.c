#include <stdio.h>
int main()
{
    int a,b,c=1,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            if(c==1)
            {
                c=0;
            }
            else
            {
                c=1;
            }
            printf("%d",c);

        }
        printf("\n");
    }
    return 0;
}