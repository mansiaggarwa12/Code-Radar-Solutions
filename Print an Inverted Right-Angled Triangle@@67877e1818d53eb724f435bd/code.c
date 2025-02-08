#include <stdio.h>
int main() {
    int N,a,b;
    scanf("%d",&N);
    for (a=0;a<=N;a++)
    {
        printf("\n");
        for (b=0;b<N-a;b++)
        {
            printf("* ");
        }
        
    }
    return 0;
}