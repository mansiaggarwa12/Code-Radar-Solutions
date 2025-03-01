#include <stdio.h>
int main()
{
    int n,a,even,odd;
    scanf("%d",&n);
    int arr[n];
    for (a=0;a<n;a++)
    {
        scanf("%d",arr[n]);
    }
    for (a=0;a<n;a++)
    {
        if (arr[a]%2==0)
        {
            even++;
        }
        else if (arr[a]%2!=0)
        {
            odd++;
        }
    }
    printf("%d %d",even ,odd);
    return 0;
}