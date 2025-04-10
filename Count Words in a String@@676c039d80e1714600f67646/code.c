#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    int n = strlen("s"),count=0,a;
    for (a=0;a<n;a++)
    {
        if (s[a]=='\0');
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}