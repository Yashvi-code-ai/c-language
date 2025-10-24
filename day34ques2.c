#include <stdio.h>

int main() {
    int n, i, pos;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assume max size 100

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: position of element to delete
    printf("Enter position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the left to fill the gap
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // decrease array size

    // Display updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
