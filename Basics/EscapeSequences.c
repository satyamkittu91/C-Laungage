#include <stdio.h> //This is a preprocessor directive

int main(){
    printf("Escape Sequences - Characters that have a special meaning in C"
        " or characters used to move cursor around the screen\n");

    printf("\n\\n - New Line\n");
    printf("This is the first line\nThis is the second line\nThis is the third line\n");

    printf("\n\\t - Tab Space\n");
    printf("Column 1\tabColumn 2\tColumn 3\tColumn 4\n");

    printf("\n\\ - Backslash and also how to print escape sequences as a string\n");
    printf("This is a Backslash \\\\\n");

    printf("\n\" - Double Quotes\n");
    printf("This is a quote \"\n");
    
    printf("\n\' - Single Quotes\n");
    printf("This is a quote '\n");

    printf("\n\\r - Carriage Return\n");
    printf("This is a test. \rOverwrite\n");

    printf("\n\\b - Backspace\n");
    printf("This is a test. \bBackspace\n");

    printf("\n\a - Alert Beep\n");
    printf("This is a test. \aAlert\n");
    
    return 0;
}