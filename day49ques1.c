#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character as initial if not a space
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", toupper(name[0]));
    }

    // Loop through the rest of the string
    for (int i = 0; name[i] != '\0'; i++) {
        // If a space is found, print the next character (initial)
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}
