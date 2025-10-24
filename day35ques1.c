#include <stdio.h>

int main() {
    int n, i;
    
    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Check for valid size
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[100]; // assume max size 100

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;

    // Initialize first and second
    first = second = -2147483648; // smallest possible int value

    // Find first and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}
