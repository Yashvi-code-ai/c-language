#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline if present
    name[strcspn(name, "\n")] = 0;

    int len = strlen(name);
    int i = 0;

    // Print initials for first and middle names
    if (name[i] != ' ') {
        printf("%c.", toupper(name[i]));
    }

    for (i = 0; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            // Check if this is the last word (surname)
            int j = i + 1;
            int isLastWord = 1;
            for (int k = j + 1; k < len; k++) {
                if (name[k] == ' ' && name[k+1] != ' ') {
                    isLastWord = 0;
                    break;
                }
            }

            if (isLastWord) {
                // Print full surname
                printf("%s", &name[j]);
                break;
            } else {
                // Print initial of middle name
                printf("%c.", toupper(name[j]));
            }
        }
    }

    printf("\n");
    return 0;
}
