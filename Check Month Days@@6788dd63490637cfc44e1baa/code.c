#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
        case (1||3||5||7||8||10||12):
        printf("31");
        case (2):
        printf("28");
        case (4||6||8||9||11):
        printf("30");
    }
    return 0;
}