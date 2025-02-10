#include <stdio.h>
int main() {
    int a,b,n;
    scanf("%d",&n);
    for (a=0;a<n;a++)
    {
        for (b=1;b<n;b++)
        {
            if(a==1||b==0||b==n||a==n)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}