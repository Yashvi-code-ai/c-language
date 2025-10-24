#include <stdio.h>

int main() {
    int n, i, search, low, high, mid, found = 0;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input: sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: element to search
    printf("Enter element to search: ");
    scanf("%d", &search);

    // Binary search logic
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Element %d found at position %d.\n", search, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (!found)
        printf("Element %d not found in the array.\n", search);

    return 0;
}
