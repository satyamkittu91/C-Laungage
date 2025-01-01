#include <stdio.h>

enum weekdays {Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};
int main(){
    //enum = A user defined type of named integer identifiers
    //      helps to make a program more readable

    enum weekdays today = Wed; //Yeah it's wednesday today


    if (today == Sun || today == Sat ){
        printf("It's the weekend!\n");
    }else{
        printf("It's a weekday!\n");
    }

    return 0;
}