#include <stdio.h>

int main() {
    
    /* Variables - Allocated space in memory to store a value.
                    we refer to a variable's name to access the stored value.
                    In C we have to declare what type of data we are storing.*/

    int myInt = 18; // Integers are whole numbers
    float myFloat = 3.14; // Floats are decimal numbers
    char myChar = 'A'; // Characters are single characters
    char myString[] = "sample"; // Strings are arrays of characters
    char myName[] = "Sam"; // That's my nick name actually :P

    printf("My int is %d\n", myInt);
    printf("My float is %f\n", myFloat);
    printf("My char is %c\n", myChar);
    printf("My string is %s\n", myString);
    printf("You can call me %s, This is actually my nick name", myName);

    return 0;
}