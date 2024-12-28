#include <stdio.h>

int main(){
    // Switch = A more efficient alternative to if-else statements
    // It is used when you have multiple conditions to check
    // Syntax: switch(expression) { case value: code; break; default: code; }

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("You did Good!\n");
            break;
        case 'C':
            printf("You did Okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Invalid grade\n");
    }
}