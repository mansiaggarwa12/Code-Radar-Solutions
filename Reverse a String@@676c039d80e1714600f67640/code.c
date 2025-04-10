#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int n = strlen(s),a;
    for (a=0;a<n/2;a++)
    {
        char temp = s[a];
        s[a]=s[n-a-1];
        s[n-a-1] = temp;
    }
    printf("%s",s);
    return 0;
}