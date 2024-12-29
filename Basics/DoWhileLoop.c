#include <stdio.h>

int main(){
    // while loop - Check a condition, Then executes a block of code if condition is true.
    // do while loop - Always executes a block of code once, then check the condition
    /*
    do {
        // Code to be executed repeatedly
        } while (condition);
    */
    int number = 0;
    int sum = 0;

    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0){
            sum += number;
            }
        }while(number>0);

    printf("The sum is %d", sum);
}