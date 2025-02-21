#include <stdio.h>

int main() {
    int a, b, c, n;
    scanf("%d", &a);

    for (b = 0; b < a; b++) {
        // Print leading spaces for formatting
        for (int d = 0; d < a - b - 1; d++) {
            printf(" ");
        }

        n = 1;  // Reset for each row
        for (c = 0; c <= b; c++) {
            printf("%d ", n);  // Print the coefficient with spacing
            n = n * (b - c) / (c + 1);  // Correct formula for Pascal's Triangle
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
