#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], complement[100];
    
   
    printf("Enter a binary number: ");
    scanf("%s", binary);

  
    int i;
    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            complement[i] = '1';
        else if(binary[i] == '1')
            complement[i] = '0';
        else {
            printf("Invalid input. Only 0s and 1s are allowed.\n");
            return 1;
        }
    }

    complement[i] = '\0';

    printf("1's Complement: %s\n", complement);

    return 0;
}
