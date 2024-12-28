#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf("Enter side A: ");
    scanf("%lf", &a);
    printf("Enter side B: ");
    scanf("%lf", &b);

    c = sqrt(pow(a,2) + pow(b,2));
    printf("Hypotenuse or side C is: %lf", c);
    return 0;
}