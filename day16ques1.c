#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    unsigned int mask = 1 << 31;  
    int started = 0;  

    for (int i = 0; i < 32; i++) {
        if (num & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
        mask >>= 1;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBinary(num);
    printf("\n");

    return 0;
}
