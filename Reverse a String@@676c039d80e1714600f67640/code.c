#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int n = strlen(s),a;
    for (a=0;a<n/2;a++)
    {
        char temp = arr[a];
        arr[a]=arr[n-a-1];
        arr[n-a-1] = temp;
    }
    printf("%s",s);
    return 0;
}