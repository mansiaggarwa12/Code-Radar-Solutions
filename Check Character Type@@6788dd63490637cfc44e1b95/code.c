#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
        printf("Vowel");
    }
    else if (c<='a'&&c>='z'||c<='A'&&c>='Z')
    {
        printf("Consonant");
    }
    else if (c<='9'&&c>='0')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}