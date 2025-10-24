#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    sentence[strcspn(sentence, "\n")] = 0;

    char *wordStart = sentence;
    char *ptr = sentence;

    while (*ptr) {
        if (*ptr == ' ') {
            reverseWord(wordStart, ptr - 1);
            wordStart = ptr + 1;
        }
        ptr++;
    }
    // Reverse the last word
    reverseWord(wordStart, ptr - 1);

    printf("Reversed words sentence: %s\n", sentence);

    return 0;
}
