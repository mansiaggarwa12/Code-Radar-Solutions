#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf ("%d",&arr[a]);
    }
    for (a=0;a<n;a++)
    {
        int freq = 0;
        for (int b=0;b<n;b++)        
        {
            if (arr[a]==arr[b])
            {
                freq++;
            }
        }
        printf ("%d %d\n",arr[a],freq);
    }
    return 0;
}