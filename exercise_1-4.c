/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

int main()
{
    printf("Celsius to Fahrenheit Conversion Table\n\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("----------------------------\n");

    float far, cel;
    float min = 0, max = 200, step = 20;

    cel = min;

    while (cel <= max) {
        far = (cel * 9.0 / 5.0) + 32;
        printf("%6.1f\t\t%6.1f\n", cel, far);
        cel += step;
    }

    return 0;
}
