#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char sentence[]) {
    int maxLength = 0;
    int length = 0;
    int start = 0, maxStart = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            length++;  // increment length of current word
        } else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;  // starting index of longest word
            }
            length = 0;
            start = i + 1;  // next word starts after the space
        }

        if (sentence[i] == '\0') break;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLength; i++)
        putchar(sentence[i]);
    printf("\nLength: %d\n", maxLength);
}

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    findLongestWord(sentence);
    return 0;
}

