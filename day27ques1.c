#include <stdio.h>

int main() {
    int n = 5; 
    // Upper half of the pattern (including middle line)
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
