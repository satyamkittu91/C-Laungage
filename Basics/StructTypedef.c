#include <stdio.h>

typedef struct{
    char name[50];
    int id;
    float salary;
} Employee;
int main(){
    Employee employee1 = {"Sam", 91, 50000.00};

    printf("Employee Details:\n");
    printf("Name: %s\n", employee1.name);
    printf("ID: %d\n", employee1.id);
    printf("Salary: %.2f\n", employee1.salary);

    return 0;

}