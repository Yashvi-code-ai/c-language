#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // To store frequency of digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    // Output result
    printf("Digit %d occurs the most (%d times).\n", maxDigit, maxCount);

    return 0;
}
