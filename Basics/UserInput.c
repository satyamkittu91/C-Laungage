#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    int age;
    char fullname[50];

    printf("\nWhat's your name: "); 
    scanf("%s", name); // it's only take one word and breaks at whitespace



    printf("\nHow old are you: ");
    scanf("%d", &age);

    while ((getchar()) != '\n'); // it's clear the input buffer, also a advance piece of code

    printf("\nWhat's your full name: ");
    fgets(fullname, 50, stdin); // it's take full name with whitespace
    // it includes a newline character at the end of the string.
    // To remove this newline character, we can use the following code:
    fullname[strcspn(fullname, "\n")] = 0; // it's a bit advance code

    printf("\nscanf code: Hello %s, you are %d years old.\n", name, age);
    printf("fgets code: Hello %s, you are %d years old.\n", fullname, age);

    return 0;
}