#include <stdio.h>
int main() {
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<=n;a++)
    {
        for (b=1;b<=a;b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}