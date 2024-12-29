#include <stdio.h>

int birthday(char name[], int age, int birth_year){
    printf("\nHappy Birthday dear %s\n", name);
    printf("You're %d years old\n", age);
    int age_in_2025 = 2025-birth_year;

    return age_in_2025;
}

int main(){
    char name[20];
    int age;
    int birth_year;
    int age_in_2025;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    age_in_2025= birthday(name, age, birth_year);

    printf("You're %d years old in 2025\n", age_in_2025);
    return 0;
}