#include <stdio.h>
#include <string.h>

int main(){
    // while loop = repeats a section of code an unknown amount of times
    /*while (condition) {
    // Code to be executed repeatedly
        }*/
    
    char name[25];
    printf("Enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // remove newline character from name

    while(strlen(name) == 0){
        printf("You have not entered your name...\n");
        printf("Enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello, %s", name);
    return 0;
}