#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths differ, they can't be rotations
    if (len1 != len2)
        return 0;

    // Create a new string by concatenating str1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[] = "abcd";
    char str2[] = "cdab";

    if (isRotation(str1, str2))
        printf("%s is a rotation of %s\n", str2, str1);
    else
        printf("%s is NOT a rotation of %s\n", str2, str1);

    return 0;
}
