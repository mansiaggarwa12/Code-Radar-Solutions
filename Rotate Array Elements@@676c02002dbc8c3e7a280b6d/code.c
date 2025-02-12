#include <stdio.h>
int main()
{
    int N,a,K;
    scanf("%d",&N);
    int arr[N];
    for (a=0;a<N;a++)
    {
        scanf("%d",&arr[a]);
    }
    scanf("%d",&K);
    for (a=0;a<N;a++)
    {
        printf("%d\n",arr[a]-K);
    }
    return 0;
}