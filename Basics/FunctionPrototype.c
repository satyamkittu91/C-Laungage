#include <stdio.h>

void hello(char[], int); //Function Prototype

int main(){

    //Function Prototype
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    //Important notes
    // Many C Compilers do not check for parameter  matching
    // missing arguments will result in unexcpeted behaviour
    // A function prototype causes the compiler to flag an error if arguments are missing.

    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("How old are you: ");
    scanf("%d", &age);

    hello(name, age);
    return 0;
}

void hello(char name[], int age){
    printf("Hello, %s!\n", name);
    printf("You're %d years old", age);
}