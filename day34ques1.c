#include <stdio.h>

int main() {
    int n, i, num, pos;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assume max size 100

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to insert and position
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = num;
    n++; // increase size

    // Display updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
