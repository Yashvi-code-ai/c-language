#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
       
        for(int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print numbers starting from (rows - i + 1) to 5
        for(int num = rows - i + 1; num <= rows; num++) {
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}
