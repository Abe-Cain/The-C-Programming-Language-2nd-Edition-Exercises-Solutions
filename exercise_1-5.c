/*Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.*/

#include <stdio.h>

int main()
{
    printf("Fahrenheit to Celsius Conversion Table (Reverse Order)\n\n");
    printf("Fahrenheit\tCelsius\n");
    printf("----------------------------\n");

    int fahr;
    
    // Loop starts at 300°F, decrements by 20, and stops at 0°F
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%6d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
