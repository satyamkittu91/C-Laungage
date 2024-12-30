#include <stdio.h>

int main(){
    char cars[5][10] = {"Volvo", "BMW", "Ford", "Mazda", "Audi"};
    // it is basically a 2D array of characters
    // 5 rows and 10 columns
    
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }
}