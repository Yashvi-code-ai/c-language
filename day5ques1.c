#include<stdio.h>
#include<math.h>
int main(){
  float principal , rate , time;
  float simpleInterest, compoundInterest;
  
  printf("Enter the principal amount :" );
  scanf("%f",principal);
  
  printf("Ente4r the annual interest rate (in %%):");
  scanf("%f", &rate);

  printf("Enter the time period (in years): ");
  scanf("%f", &time);
  
  simpleInterest = (principal * rate * time) / 100;

  compoundInterest = principal * pow((1 + rate / 100), time) - principal;

   
    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
