#include <stdio.h>


int get_max(int x, int y){
    return (x>y) ? x:y;
}
int main(){
    // ternary operator: shortcut to if/else when assigning/returning a value.
    // (Condition) ? value if true : value if false
    int x;
    int y;
    
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter another number: ");
    scanf("%d", &y);

    printf("The larger number is %d", get_max(x, y));

    return 0;
}