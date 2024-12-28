#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c = 0;

    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = b / a;
    printf("b / a = %d\n", c);

    c = b % a;
    printf("b %% a = %d\n", c);

    c = a++; // The value of a increase by 1
    printf("a++ = %d\n", a);

    c = a--; // The value of a decrease by 1, now a is 11 before it decreases
    printf("a-- = %d\n", a);

    int x = 5;
    int y = 2;

    float z = x/y;
    printf("The variable is an integer type so it will round up to %f\n", z);

    float z2 = (float)x/y;
    printf("The variable is a float type so it will return to %f\n", z2);

    return 0;
}