#include <stdio.h>
int main()
{
    char a;
    scanf("%s",&a);
    if (a.isupper)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}