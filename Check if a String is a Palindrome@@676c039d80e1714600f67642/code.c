#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char dup[100];
    strcpy(dup,s);
    int n = strlen (s), a;
    for (a=0;a<n/2;a++)
    {
        char temp = dup[a];
        dup[a] = dup[n-a-1];
        dup[n-a-1] = temp;
    }
    if (strcmp(dup,s))
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0;
}