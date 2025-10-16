#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator, denominator;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    numerator = 2;
    denominator = 3;

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;     // increase numerator by 2
        denominator += 4;   // increase denominator by 4
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
