#include <stdio.h>
int main() {
    int N,a,b;
    scanf("%d",&N);
    for (a=0;a<=N;a++)
    {
        for (b=0;b<N-a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}