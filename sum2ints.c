/* This program takes 2 integers from user and adds them together  */

#include<stdio.h>

int main(void) 
{
    // set the variables
    int integer1, integer2, sum, diff, prod;

    printf("Enter the first number:");
    scanf("%i", &integer1);
    printf("Enter the second number:");
    scanf("%i", &integer2);

    sum = integer1 + integer2;
    diff = integer1 - integer2;
    prod = integer1 * integer2;
    //show the output
    printf("\n%i+%i=%i\n", integer1, integer2, sum);
    printf("%i-%i=%i\n", integer1, integer2, diff);
    printf("%i*%i=%i\n", integer1, integer2, prod);

    return 0;
}
