#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    (n>0)?printf("Positive"):(n==0)?printf("Zero"):printf("Negative");
    return 0;
}