#include <stdio.h>
#include <ctype.h>  // for tolower()

int isVowel(char c) {
    c = tolower(c);  // convert to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (!isVowel(str[i])) {  // keep non-vowel characters
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // terminate the new string
}

int main() {
    char text[] = "Hello World!";
    removeVowels(text);
    printf("%s\n", text);  // Output: Hll Wrld!
    return 0;
}
