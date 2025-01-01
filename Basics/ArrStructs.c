#include <stdio.h>

typedef struct {
    char name[50];
    double gpa;
    } student;

int main() {

    student student1 = {"Sam", 4.0}; //Making myself smarter :D
    student student2 = {"Harry", 3};
    student student3 = {"Ron", 2.9};
    student student4 = {"Hermione", 3.9};
    student student5 = {"Draco", 1.9};

    student students[5] = {student1, student2, student3, student4, student5};

    for (int i =0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("GPA: %.2f\n", students[i].gpa);
    }

}