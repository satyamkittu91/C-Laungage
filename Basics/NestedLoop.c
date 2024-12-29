#include <stdio.h>

int main(){
    int columns, rows;
    char symbol;

    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the symbol: ");
    scanf(" %c", &symbol);

    for(int i =1; i <=rows; i++)
        {
        for(int i=1; i<=columns; i++)
            {
            printf("%c", symbol);
            }
            printf("\n");
        }
    return 0;
}