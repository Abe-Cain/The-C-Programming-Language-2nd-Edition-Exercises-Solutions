#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // Printing the minimum and maximum values for integer types
    printf("Data_Type: {int}            | Min_Size: {%d}     | Max_Size: {%d}\n", INT_MIN, INT_MAX);

    // Printing the minimum and maximum values for unsigned integer types
    printf("Data_Type: {unsigned int}   | Min_Size: {0}       | Max_Size: {%u}\n", UINT_MAX);

    // Printing the minimum and maximum values for short integer types
    printf("Data_Type: {short}          | Min_Size: {%d}     | Max_Size: {%d}\n", SHRT_MIN, SHRT_MAX);

    // Printing the minimum and maximum values for unsigned short integer types
    printf("Data_Type: {unsigned short} | Min_Size: {0}       | Max_Size: {%u}\n", USHRT_MAX);

    // Printing the minimum and maximum values for long integer types
    printf("Data_Type: {long}           | Min_Size: {%ld}    | Max_Size: {%ld}\n", LONG_MIN, LONG_MAX);

    // Printing the minimum and maximum values for unsigned long integer types
    printf("Data_Type: {unsigned long}  | Min_Size: {0}       | Max_Size: {%lu}\n", ULONG_MAX);

    // Printing the minimum and maximum values for character types (as integers)
    printf("Data_Type: {char}           | Min_Size: {%d}     | Max_Size: {%d}\n", CHAR_MIN, CHAR_MAX);

    // Printing the maximum value for unsigned char types (min is 0)
    printf("Data_Type: {unsigned char}  | Min_Size: {0}       | Max_Size: {%u}\n", UCHAR_MAX);

    // Printing the minimum and maximum values for float types with better precision
    printf("Data_Type: {float}          | Min_Size: {%.10e}   | Max_Size: {%.10e}\n", FLT_MIN, FLT_MAX);

    // Printing the minimum and maximum values for double types
    printf("Data_Type: {double}         | Min_Size: {%.10e}   | Max_Size: {%.10e}\n", DBL_MIN, DBL_MAX);

    // Printing the minimum and maximum values for long double types
    printf("Data_Type: {long double}    | Min_Size: {%.10Le}  | Max_Size: {%.10Le}\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
