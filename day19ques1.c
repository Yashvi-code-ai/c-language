#include <stdio.h>


int (int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    lcm = findLCM(num1, num2);

    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
