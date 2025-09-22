#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int found_odd = 0;  

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        digit = num % 10;

        if (digit % 2 != 0) {  
            product *= digit;
            found_odd = 1;
        }

        num = num / 10;
    }

    if (found_odd) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
