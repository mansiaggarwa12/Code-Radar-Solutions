#include <stdio.h>

int main() {
    int a,b,c,N;
    scanf("%d",&N);
    for (a=0;a<N;a++)
    {
        for (b=0;b<=N-1-a;b++)
        {
            printf(" ");
        }
        for (c=0;c<(2*a)-1;c+=2)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}