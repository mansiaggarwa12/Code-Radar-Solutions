#include <stdio.h>

int main() {
    int a,b,c,n;
    scanf("%d",&n);
    int p;
    p=(2*n)+1;
    for (a=0;a<p;a++)
    {
        for (b=a;b>p-a;b--)
        {
            printf(" ");
        }
        for (c=0;c<a;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}