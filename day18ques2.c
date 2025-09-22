#include<stdio.h>

  int a,b;
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
int num1,num2,hcf;
 printf("Enter first number: ");
    scanf("%d", &num1);    
printf("Enter second number: ");
    scanf("%d", &num2);
 hcf = findHCF(num1, num2);

    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
