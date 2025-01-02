#include <stdio.h>

int main(){
    // memory = an array of bytes within RAM.
    //memory block = a group of bytes within RAM.
    //memory address = the location of a memory block within RAM
    int x = 10;
    int y = 20;
    char z = 'A';

    printf("The memory address of x is: %p\n", &x);
    printf("The memory address of y is: %p\n", &y);
    printf("The memory address of z is: %p\n", &z);

}