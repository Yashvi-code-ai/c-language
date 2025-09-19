#include<stdio.h>

int main(){
    double a , b , c;

    printf("Enter the three sides of triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive numbers.\n");
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("These sides do not form a valid triangle.\n");
    } else {
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || c == a) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }

    return 0;
}



