#include <stdio.h>
int main()
{
    int n,a,c=1;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf ("%d",&arr[a]);
    }
    int arr2[c];
    for (a=0;a<n;a++)
    {
        for (b=0;b<n;b++)
        {
            if (arr[a]==arr[b])
            {
                continue;
            }
            else 
            {
                arr2[c-1]=arr[a];
                c++;
            }
        }
    }
    for (a=0;a<n;a++)
    {
        int freq = 0;
        for (int b=0;b<n;b++)        
        {
            if (arr2[a]==arr[b])
            {
                freq++;
            }
        }
        printf ("%d %d\n",arr[a],freq);
    }
    return 0;
}