#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {

    //Struct = Collection of related members ("variables")
    //Structs are used to group variables together
    //listed under one name in a block of memory
    //Very similar to classes in other programming languages (but no methods)
    struct Employee employee1;
    struct Employee employee2;

    strcpy(employee1.name, "John Doe");
    employee1.id = 123;
    employee1.salary = 50000.00;

    strcpy(employee2.name, "Jane Doe");
    employee2.id = 124;
    employee2.salary = 60000.00;

    printf("Employee Details:\n");
    printf("Name: %s\n", employee1.name);
    printf("ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee2.name);
    printf("ID: %d\n", employee2.id);
    printf("Salary: %.2f\n", employee2.salary);

    return 0;
}