#include <stdio.h>

int main(){
    // array = a data structure that can store many values of the same data type.
    double prices1[5]; // array of 5 double values
    prices1[0] = 1.0;
    prices1[1] = 2.0;
    prices1[2] = 3.0;
    prices1[3] = 4.0;
    prices1[4] = 5.0;
    
    double prices[5] = {1.0, 2.0, 3.0, 4.0, 5.0}; // array of 5 double values
    for(int i=0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("prices[%d] = %.2f\n", i, prices[i]);
    }
}