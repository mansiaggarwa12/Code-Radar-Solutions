#include <stdio.h>
int main()
{
    char a[40],b[40];
    int c;
    scanf("%39s %d %39s",a,&c,b);
    printf("Name: %s\nAge: %d\nHobby: %s",a,c,b);
}