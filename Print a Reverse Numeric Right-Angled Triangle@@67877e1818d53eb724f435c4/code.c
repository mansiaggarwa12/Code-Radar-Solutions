#include <stdio.h>
int main() {
    int a,b,c=1,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=n-a;b>0;b--)
        {
            printf("%d ",c);
            c++;
        }
        c=1;
        printf("\n");
    }
    return 0;
}