#include <stdio.h>


int main() {
    int age;
    printf("\nEnter Your Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.");

    } else if (age < 18 && age > 0) {
        printf("You are a minor.");

    } else{
        printf("You haven't been born yet!");
    }
}