#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    // Find divisors and sum them
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number
    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0) {
        if(isPerfect(number)) {
            printf("%d is a perfect number.\n", number);
        } else {
            printf("%d is not a perfect number.\n", number);
        }
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
