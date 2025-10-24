#include <stdio.h>
#include <ctype.h> // for tolower()

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;
    char ch;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    while (str[i] != '\0') {
        ch = tolower(str[i]); // convert to lowercase for simplicity

        if ((ch >= 'a' && ch <= 'z')) { // consider only alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
