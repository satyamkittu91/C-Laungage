#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "w"); 

    if (fp == NULL) {
        perror("Error opening file");
        return 1; 
    }

    fprintf(fp, "Hello, world!\n");
    fprintf(fp, "This is a test file.\n");

    fclose(fp);

    return 0;
}