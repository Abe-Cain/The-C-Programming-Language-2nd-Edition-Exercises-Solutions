#include <stdio.h>

// Function prototypes
void celsius_to_fahrenheit();
void fahrenheit_to_celsius();

int main()
{
    // Convert Celsius to Fahrenheit
    printf("\n=======================================\n");
    celsius_to_fahrenheit();

    // Convert Fahrenheit to Celsius
    fahrenheit_to_celsius();
    printf("=======================================\n\n");

    return 0;
}

// Function to convert Celsius to Fahrenheit
void celsius_to_fahrenheit()
{
    int min = 0, max = 200, step = 20;

    printf("\nCelsius to Fahrenheit Conversion Table:\n");
    printf("---------------------------------------\n");

    for (int celsius = min; celsius <= max; celsius += step)
    {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("C: %6d | F: %6.1f\n", celsius, fahrenheit);
    }

    printf("---------------------------------------\n\n");
}

// Function to convert Fahrenheit to Celsius
void fahrenheit_to_celsius()
{
    int min = 0, max = 200, step = 20;

    printf("Fahrenheit to Celsius Conversion Table:\n");
    printf("---------------------------------------\n");

    for (int fahrenheit = min; fahrenheit <= max; fahrenheit += step)
    {
        double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("F: %6d | C: %6.1f\n", fahrenheit, celsius);
    }

    printf("---------------------------------------\n");
}
