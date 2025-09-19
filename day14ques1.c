#include <stdio.h>

int main() {
    int n, sum = 0, current_odd = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += current_odd;
        current_odd += 2;  

    printf("The sum of the first %d odd numbers is %d\n", n, sum);

    return 0;
}
