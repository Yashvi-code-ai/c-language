#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int isStrongNumber(int num) {
    int sum = 0, temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        if (isStrongNumber(number)) {
            printf("%d is a Strong Number.\n", number);
        } else {
            printf("%d is not a Strong Number.\n", number);
        }
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
