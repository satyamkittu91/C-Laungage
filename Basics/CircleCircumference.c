#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("The circumference of the circle is: %lf\n", circumference);
    return 0;
}