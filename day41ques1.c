#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads string including spaces

    // Count characters until null terminator
    while (str[i] != '\0') {
        if (str[i] != '\n') { // ignore newline character from fgets
            count++;
        }
        i++;
    }

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
