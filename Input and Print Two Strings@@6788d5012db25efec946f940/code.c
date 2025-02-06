#include <stdio.h>


int main() {
    char c[500];
    fgetsf("%s",&c);
    printf("You entered: %s", c);
    return 0;
}