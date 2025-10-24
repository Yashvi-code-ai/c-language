#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int i = 0;
    int j = 0;
    
    // Find the length of the string
    while (str[j] != '\0') {
        j++;
    }
    j--; // point to the last character (before '\0')

    // Swap characters from start and end
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[] = "hello world";
    reverse_string(str);
    printf("%s\n", str);  // Output: dlrow olleh
    return 0;
}
