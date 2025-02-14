#include <stdio.h>
int main() {
    int a,b,c,n,d;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=n-a;b>0;b--)
        {
            printf("%d ",n-b+1);
            d=n-b+1;
        }
        d=1;
        printf("\n");
    }
    return 0;
}