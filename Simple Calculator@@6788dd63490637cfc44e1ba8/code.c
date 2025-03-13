#include <stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%f %f",&a,&b);
    scanf("%c ",&c);
    printf("%c",c);
    switch (c)
    {
    case '+':
        printf("%f",a+b);
        break;
    case '-':
        printf("%f",a-b);
        break;
    case '*':
        printf("%f",a*b);
        break;
    case '/':
        printf("%f",a/b);
        break;
    default :
        printf("error");
        break;
    }
    return 0;
}