#include <stdio.h>

char firstRepeatingLowercase(char str[]) {
    int freq[26] = {0};  // frequency array for 'a' to 'z'
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // increment frequency
            if (freq[str[i] - 'a'] == 2) {  // first time it repeats
                return str[i];
            }
        }
    }
    return '\0';  // return null char if no repeating lowercase letter
}

int main() {
    char text[] = "abcdeafgh";
    char result = firstRepeatingLowercase(text);

    if (result != '\0')
        printf("First repeating lowercase letter: %c\n", result);
    else
        printf("No repeating lowercase letter found.\n");

    return 0;
}
