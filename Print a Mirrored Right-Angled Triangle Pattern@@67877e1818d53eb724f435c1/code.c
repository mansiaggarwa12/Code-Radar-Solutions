#include <stdio.h>
int main() {
    int a,b,c,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            printf(" ");
        }
        for (c=0;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}