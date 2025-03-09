#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a==b&&b==c)?printf("Equilateral"):(a==b||b==c||a==c)?printf("Isosceles"):printf("Scalene");
    return 0;
}