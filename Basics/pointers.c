#include <stdio.h>

int main(){
    // Pointers = a "variable-like" reference that holds a memory address.
    // Dereferencing = accessing the value of a memory address.
    // * - indirection operator (value at address)

    int age = 18;
    int *pAge = NULL; // Pointer initialization to NULL (good practice to assign NULL if declaring a pointer)
    pAge = &age;

    printf("The memory address of age is: %p\n", &age);
    printf("The memory address of pAge is: %p\n", &pAge);
    printf("The value of pAge is: %d\n", *pAge); // Dereferencing
    printf("The value of age is: %d\n", age);
    printf("Size of age is: %d\n", sizeof(age));
    printf("Size of pAge is: %d\n", sizeof(pAge));
}