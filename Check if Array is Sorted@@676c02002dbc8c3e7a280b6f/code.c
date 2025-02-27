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
        for (int b=0;b<n;b++)
        {
            if (arr[a]>arr[b])
            {
                sorted =1;
            }
            else 
            {
                sorted =0;
            }
        }
    }
    if (s==1)
    {
        printf("Not Sorted");
    }
    else if (s==0)
    {
        printf ("Sorted");
    }
    return 0;
}