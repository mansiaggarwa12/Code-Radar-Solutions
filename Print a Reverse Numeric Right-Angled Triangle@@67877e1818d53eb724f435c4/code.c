#include <stdio.h>
int main() {
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=n-a;b>0;b--)
        {
            printf("%d ",a-b);
        }
        printf("\n");
    }
    return 0;
}