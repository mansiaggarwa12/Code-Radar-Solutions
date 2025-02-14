#include <stdio.h>

int main() {
    int a,b,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<2*a+1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
