#include <stdio.h>
#include <stdbool.h> // for boolean values i.e. true or false

int main(){
    // && (And) logical operator
    // || (Or) logical operator
    // ! (Not) logical operator
    // == (Equal) logical operator
    // != (Not Equal) logical operator
    // > (Greater Than) logical operator
    // < (Less Than) logical operator
    // >= (Greater Than or Equal) logical operator
    // <= (Less Than or Equal) logical operator

    // && (And) logical operator
    if (true && true) {
        printf("true && true\n");
    }
    if (true && false) {
        printf("true && false\n");
    }
    if (false && true) {
        printf("false && true\n");
    }

    // || (Or) logical operator
    if (true || true) {
        printf("true || true\n");
    }
    if (true || false) {
        printf("true || false\n");
    }
    if (false || true) {
        printf("false || true\n");
    }
    if (false || false) {
        printf("false || false\n");
    }

    // ! (Not) logical operator
    if (!true) {
        printf("!true\n");
    }
    if (!false) {
        printf("!false\n");
    }

    // == (Equal) logical operator
    if (1 == 1) {
        printf("1 == 1\n");
    }
    if (1 == 2) {
        printf("1 == 2\n");
    }

    // != (Not Equal) logical operator
    if (1 != 1) {
        printf("1 != 1\n");
    }
    if (1 != 2) {
        printf("1 != 2\n");
    }

    // > (Greater Than) logical operator
    if (2 > 1) {
        printf("2 > 1\n");
    }
    if (1 > 2) {
        printf("1 > 2\n");
    }
    
    // < (Less Than) logical operator
    if (1 < 2) {
        printf("1 < 2\n");
    }
    if (2 < 1) {
        printf("2 < 1\n");
    }

    // >= (Greater Than or Equal) logical operator
    if (2 >= 1) {
        printf("2 >= 1\n");
    }
    if (1 >= 1) {
        printf("1 >= 1\n");
    }

    // <= (Less Than or Equal) logical operator
    if (1 <= 2) {
        printf("1 <= 2\n");
    }
    if (1 <= 1) {
        printf("1 <= 1\n");
    }

    return 0;
}