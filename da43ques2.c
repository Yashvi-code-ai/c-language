#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i = 0;
    int j = 0;

    // Find the length of the string
    while (str[j] != '\0') {
        j++;
    }
    j--; // point to the last character

    // Compare characters from start and end
    while (i < j) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
        i++;
        j--;
    }
    return 1; // It's a palindrome
}

int main() {
    char str[] = "level";

    if (is_palindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
