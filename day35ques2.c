#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // assume max size 100

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: number of positions to rotate
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Handle k greater than n
    k = k % n;

    // Rotate array using reverse method
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    // Print rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
