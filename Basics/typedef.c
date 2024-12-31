#include <stdio.h>

//Typedef = Alias for a data type
typedef char user[25];

int main(){
    // Typedef = reserved keyword that gives an existing datatype a "nickname"

    user username = "John Doe";

    printf("Username: %s", username);
}