#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int areAnagrams(char str1[], char str2[]) {
    int freq[26] = {0};  // frequency array for lowercase letters

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i]) && isalpha(str2[i])) {
            freq[tolower(str1[i]) - 'a']++;   // count from str1
            freq[tolower(str2[i]) - 'a']--;   // subtract count from str2
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[] = "Listen";
    char str2[] = "Silent";

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
