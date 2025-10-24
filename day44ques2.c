#include <stdio.h>

void replaceSpacesWithHyphens(char *str) {
    while (*str) {
        if (*str == ' ') {
            *str = '-';
        }
        str++;
    }
}

int main() {
    char input[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Replace spaces with hyphens
    replaceSpacesWithHyphens(input);

    // Output the modified string
    printf("Modified string: %s\n", input);

    return 0;
}
