#include <stdio.h>

int main() {

    char operator;
    double first, second, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second); // enter two operators with a space between them or press enter after each number

    switch (operator) {
        case '+':
            result = first + second;
            break;
        case '-':
            result = first - second;
            break;
        case '*':
            result = first * second;
            break;
        case '/':
            result = first / second;
            break;
        default:
            printf("Error! operator %c is not correct", operator);
            return 1;
    }

    printf("Result: %lf\n", result);

    return 0;
}