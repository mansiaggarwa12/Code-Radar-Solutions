#include <stdio.h>
int main() {
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=a;b>0;b--)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}