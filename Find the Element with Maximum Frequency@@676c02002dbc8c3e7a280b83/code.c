#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int freqNum=-1,maxfreq=0;
    for (a=0;a<n;a++)
    {
        int count=0;
        for (b=0;b<n;b++)
        {
            if (arr[b]==arr[a])
            {
                count++;
            }
            if (count>maxfreq)
            {
                maxfreq=count;
                freqNum=arr[a];
            }
        }
    }
    printf("%d",freqNum);
    return 0;
}