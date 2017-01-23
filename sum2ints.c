/* This program takes 2 integers from user and adds them together  */

#include<stdio.h>

int main(void) 
{
    // set the variables
    int integer1, integer2, sum, diff, prod;

    printf("Enter the first number:\n");
    scanf("%i", &integer1);
    printf("Enter the second number:\n");
    scanf("%i", &integer2);

    sum = integer1 + integer2;
    diff = integer1 - integer2;
    prod = integer1 * integer2;
    //show the output
    printf ("%i+%i=%i\n", integer1, integer2, sum);

    return 0;
}
