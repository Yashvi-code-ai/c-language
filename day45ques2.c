#include <stdio.h>
#include <ctype.h>  // for isupper(), islower(), toupper(), tolower()

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char text[] = "Hello World!";
    toggleCase(text);
    printf("%s\n", text);  // Output: hELLO wORLD!
    return 0;
}
