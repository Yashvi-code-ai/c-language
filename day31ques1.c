#include <stdio.h>

int main() {
    int n, i, search, found = 0;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to search
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at position %d.\n", search, i + 1);
            found = 1;
            break; // Stop after finding the first occurrence
        }
    }

    // If not found
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
