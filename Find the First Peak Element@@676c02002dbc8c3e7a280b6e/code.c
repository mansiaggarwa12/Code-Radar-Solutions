#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int a = 0; a < n; a++) {
        scanf("%d", &arr[a]);
    }

    // If there's only one element, it is a peak
    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    // Checking the first element
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }

   

    // Checking the middle elements correctly
    for (int a = 1; a < n - 1; a++) {  // **Fixed loop range**
        if (arr[a] > arr[a - 1] && arr[a] > arr[a + 1]) {
            printf("%d", arr[a]);  // First peak found
            return 0;
        }
    }
 // Checking the last element
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
        return 0;
    }
    printf("-1"); // No peak found
    return 0;
}
