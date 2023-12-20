
// C program to find the size of int, char,
// float and double data types

#include <stdio.h>

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // the size of integer type
    printf("Size of int is: %d", sizeof integerType);

    // the size of charType
    printf("\nSize of char is: %d", sizeof charType );

    // the size of floatType
    printf("\nSize of float is: %d", sizeof floatType );

    // the size of doubleType
    printf("\nSize of double is: %d", sizeof doubleType );

    return 0;
}
