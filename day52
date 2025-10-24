#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            // Exact match is the ceil
            ceilIndex = mid;
            high = mid - 1; // move left to find first occurrence if duplicates exist
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            // arr[mid] > x, possible ceil
            ceilIndex = mid;
            high = mid - 1; // move left to find smaller index
        }
    }

    return ceilIndex;
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Index of ceil of %d: %d\n", x, index);

    return 0;
}
