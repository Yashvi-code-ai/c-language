#include <stdio.h>

int main() {
    int n, i, num, pos;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assuming max size 100

    // Input: sorted array
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to insert
    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    pos = n;
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = num;
    n++; // increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
