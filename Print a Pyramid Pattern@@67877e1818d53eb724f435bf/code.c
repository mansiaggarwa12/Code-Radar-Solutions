#include <stdio.h>

int main() {
    int a,b,c,n;
    scanf(%d,&n);
    int p;
    p=(2*n)+1;
    for (a=0;a<n;a++)
    {
        for (b=0;b<a;b++)
        {
            printf(" ");
        }
        for (c=0;c<p;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}