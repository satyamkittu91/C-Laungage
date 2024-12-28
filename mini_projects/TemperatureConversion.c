#include <stdio.h>

int main() {
    char unit;
    double temperature;
    char convertunit;

    printf("\nIs the Temperature in (F) or (C) or (K): ");
    scanf(" %c", &unit);

    printf("\nEnter the Temperature: ");
    scanf("%lf", &temperature);

    printf("\nWould you like to convert to (F) or (C) or (K): ");
    scanf(" %c", &convertunit);

    switch (unit){
        case 'F':
            switch (convertunit){
                case 'F': printf("\nTemperature is: %lf", temperature); break;
                case 'C': printf("\nTemperature is: %lf", ((temperature - 32) * 5 / 9)); break;
                case 'K': printf("\nTemperature is: %lf", ((temperature - 32) * 5 / 9) + 273.15); break;
                default: printf("\nInvalid Convert Unit");
                }
            break;
            
        case 'C':
            switch (convertunit){
                case 'F': printf("\nTemperature is: %lf", ((temperature * 9 / 5) + 32)); break;
                case 'C': printf("\nTemperature is: %lf", temperature); break;
                case 'K': printf("\nTemperature is: %lf", temperature + 273.15); break;
                default: printf("\nInvalid Convert Unit");
                }
            break;
        case 'K':
            switch (convertunit){
                case 'F': printf("\nTemperature is: %lf", ((temperature - 273.15) * 9 / 5) + 32); break;
                case 'C': printf("\nTemperature is: %lf", temperature - 273.15); break;
                case 'K': printf("\nTemperature is: %lf", temperature); break;
                default: printf("\nInvalid Convert Unit");
                }
            break;
        default:
            printf("\nInvalid Input");
            break;
        }

    return 0;
    }