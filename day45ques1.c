#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to count
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    // Iterate through the string and count occurrences of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
