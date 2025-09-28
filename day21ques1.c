#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

  
    last = num % 10;

 
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    first = num / (int)pow(10, digits - 1);

    
    num = num % (int)pow(10, digits - 1);
   
    num = num / 10;

    
    int swapped = last * (int)pow(10, digits - 1) + num * 10 + first;


    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}

    
