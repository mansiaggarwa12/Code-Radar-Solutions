#include <stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%f %f",&a,&b);
    scanf("%s ",c);
    printf("%s ",c);
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