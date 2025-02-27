#include <stdio.h>

int main() {
    int N, K;
    scanf("%d", &N);  // Read size of the array
    int arr[N];

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &K);  // Read the number of rotations
    K = K % N;  // Reduce unnecessary rotations

    // Rotate the array in-place
    for (int i = 0; i < K; i++) {
        int last = arr[N - 1];
        for (int j = N - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}