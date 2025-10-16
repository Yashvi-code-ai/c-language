#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            // First term is just 1 (numerator = denominator = 1)
            sum += 1.0;
        } else {
            numerator = 2 * i - 1;     
            denominator = 2 * i;       
            sum += (double)numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
