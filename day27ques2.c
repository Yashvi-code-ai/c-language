#include <stdio.h>

int main() {
    int n = 4;  // number of rows in the upper half (max stars = 2*n -1)

    // Upper half of the diamond (including middle line)
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars (odd numbers: 1,3,5,7...)
        for(int stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for(int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for(int stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    retur
