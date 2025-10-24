#include <stdio.h>

// Function to find first occurrence of target
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;       // potential first occurrence
            high = mid - 1;     // move left to find earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

// Function to find last occurrence of target
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;       // potential last occurrence
            low = mid + 1;      // move right to find later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    printf("First and Last Occurrence: %d, %d\n", first, last);

    return 0;
}
