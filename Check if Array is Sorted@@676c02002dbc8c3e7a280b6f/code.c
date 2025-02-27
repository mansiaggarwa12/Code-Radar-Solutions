#include <stdio.h>
int main()
{
    int n,a,sorted=0;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]>=arr[a+1])
        {
            sorted = 1;
        }
        else 
        {
            sorted = 0;
        }
    }
    if (sorted==1)
    {
        printf("Not Sorted");
    }
    else if (sorted==0)
    {
        printf ("Sorted");
    }
    return 0;
}