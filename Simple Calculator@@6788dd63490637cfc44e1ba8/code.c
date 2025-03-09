#include <stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d%d",&a,&b);
    scanf("%c ",&c);
    switch (c)
    {
    case '+':
    printf("%d",a+b);
    case '-':
    printf("%d",a-b);
    case '*':
    printf("%d",a*b);
    case '/':
    printf("%d",a/b);
    default :
    printf("error");
    }
    return 0;
}