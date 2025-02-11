#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input the number of rows for the top half of the pattern

    for (int a = 0; a < n; a++) { // Loop for the upper half of the pattern
        for (int b = 0; b < (n - a - 1); b++) {
            printf(" "); // Printing leading spaces
        }
        for (int c = 0; c < (2 * a + 1); c++) {
            printf("*"); // Printing stars
        }
        printf("\n"); // Newline after each row
    }

    for (int a = n - 2; a >= 0; a--) { // Loop for the lower half of the pattern
        for (int b = 0; b < (n - a - 1); b++) {
            printf(" "); // Printing leading spaces
        }
        for (int c = 0; c < (2 * a + 1); c++) {
            printf("*"); // Printing stars
        }
        if (a > 0) {
            printf("\n"); // Newline after each row, but not after the last row
        }
    }

    return 0;
}