#include <stdio.h>
int main() {
    int N,a,b;
    scanf("%d",&N);
    for (a=0;a<N;a++)
    {for (b=0;b<a;b++)
    {
        printf("*");
    }}
    return 0;
}