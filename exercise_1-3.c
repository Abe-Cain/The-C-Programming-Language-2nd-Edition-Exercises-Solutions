/*Exercise 1-3. Modify the temperature conversion program to print a heading above the table.*/

#include <stdio.h>

int main()
{
    printf("Fahrenheit to Celsius Conversion Table\n\n");
    printf("Fahrenheit\tCelsius\n");
    printf("----------------------------\n");

    float far, cel;
    float min = 0, max = 200, step = 20;

    far = min;

    while (far <= max) 
    {
        cel = (5.0 / 9.0) * (far - 32.0);
        printf("%6.1f\t\t%6.1f\n", far, cel);
        far += step;
    }

    return 0;
}
