#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A = sqrt(9); // square root of 9
    double B = pow(2, 3); // 2 raised to the power of 3
    double C = log(10); // natural logarithm of 10
    double D = exp(2); // e^2
    int E = round(3.14); // round to the nearest integer
    int F = ceil(3.14); // round up to the nearest integer
    int G = floor(3.14); // round down to the nearest integer
    int H = abs(-10); // absolute value of -10
    int I = abs(10); // absolute value of 10
    double J = fmod(10, 3); // remainder of 10 divided by 3
    double K = fabs(-3.14); // absolute value of -3.14
    double L = sin(45); // sine of 45 radians
    double M = cos(45); // cosine of 45 radians
    double N = tan(45); // tangent of 45 radian

    printf("sqrt(9): %lf\n", A);
    printf("pow(2, 3): %lf\n", B);
    printf("log(10): %lf\n", C);
    printf("exp(2): %lf\n", D);
    printf("round(3.14): %d\n", E);
    printf("ceil(3.14): %d\n", F);
    printf("floor(3.14): %d\n", G);
    printf("abs(-10): %d\n", H);
    printf("abs(10): %d\n", I);
    printf("fmod(10, 3): %lf\n", J);
    printf("fabs(-3.14): %lf\n", K);
    printf("sine of 45 radians: %lf\n", L);
    printf("cosine of 45 radians: %lf\n", M);
    printf("tangent of 45 radians: %lf\n", N);

    return 0;
}