#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int a , n = strlen (s),count=0;

    for (a=0;a<n;a++)
    {
        s[a]=tolower(s[a]);
        if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}