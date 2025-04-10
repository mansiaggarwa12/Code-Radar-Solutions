#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int a , n = strlen (s),count=0;
    s=tolower(s);
    for (a=0;a<n;a++)
    {
        if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}