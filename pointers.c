#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int var = 20;

    // Print the value of var
    printf ("The value of var is %i\n", var);

    // Print the address of var, the variable is denoted with the ampersand (&) operator
    printf ("The address of var is %p\n", &var);

    // Create a variable (pointer) which will hold the address of the var variable
    int *var_pointer = &var;

    // Print the value of the *var_pointer
    printf ("The value of *var_pointer is %p\n", var_pointer);

    // Use the unary (*) operator to return the value of the variable located at the address specified
    // by var_pointer
    printf ("The value stored in address %p is %i\n", var_pointer, *var_pointer);

    return EXIT_SUCCESS;
}