#include <stdio.h>

void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {  // loop until the end of the string
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
        i++;
    }
}

int main() {
    char str[] = "hello world";
    to_uppercase(str);
    printf("%s\n", str);  // Output: HELLO WORLD
    return 0;
}
