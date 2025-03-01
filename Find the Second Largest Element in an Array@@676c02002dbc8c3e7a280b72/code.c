#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) { // If only one number is given, we can't find the second max.
        printf("-1");
        return 0;
    }

    int a, arr[n];
    for (a = 0; a < n; a++) {
        scanf("%d", &arr[a]);
    }

    int max = arr[0], max2 = -1000000000; // Initialize max2 with a very small number.

    // Find the maximum element
    for (a = 1; a < n; a++) {
        if (arr[a] > max) {
            max = arr[a];
        }
    }

    // Find the second maximum element
    for (a = 0; a < n; a++) {
        if (arr[a] < max && arr[a] > max2) {
            max2 = arr[a];
        }
    }

    // If no second maximum exists, return -1
    if (max2 == -100) {
        printf("-1");
    } else {
        printf("%d", max2);
    }

    return 0;
}