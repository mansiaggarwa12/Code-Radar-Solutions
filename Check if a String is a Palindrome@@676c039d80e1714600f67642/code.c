#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char dup[100]=s;
    int n = strlen (s), a;
    for (a=0;a<n;a++)
    {
        char temp = dup[a];
        dup[a] = dup[n-a-1];
        dup[n-a-1] = temp;
    }
    if (dup == s)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}