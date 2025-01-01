#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //pseudo random numbers = A set of values or element that are statistically random
    //                      (Don't use these for any sort of cryptography security or authentication)

    srand(time(NULL)); // seed the random number generator with the current time
    //a fix seed will return the same number
    int randomNum = rand()%100; // rand() returns an integer value between 0 and RAND_MAX (32767 on most systems)
    // adding "%100" limits the random number to a range of 0 to 99
    printf("Random number: %d\n", randomNum);
}