#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize max, max2, min, and min2
    int max = arr[0], max2 = -1000000000, min = arr[0], min2 = 1000000000;

    // Loop through the array to find max, max2, min, and min2
    for (int i = 1; i < n; i++)
    {
        // For max and max2
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }

        // For min and min2
        if (arr[i] < min)
        {
            min2 = min;
            min = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min)
        {
            min2 = arr[i];
        }
    }

    // Compare the product of max*max2 and min*min2
    if (max * max2 >= min * min2)
    {
        printf("%d", max * max2);
    }
    else
    {
        printf("%d", min * min2);
    }

    return 0;
}