#include <stdio.h>
int main() {
    int a,b,N;
    scanf("%d",&N);
    for(a=0;a<=N;a++)
    {
        for (b=0;b<a-1;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}