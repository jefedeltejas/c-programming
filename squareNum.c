#include <stdio.h>



/* main program  */
int main(void)
{
    /*  these are my variables  */
    int number, output;

    /* prompt the user for data  */
    printf("Enter an integer: ");

    /* scan the user input from console*/
    scanf("%d", &number);

    /* make the calculation*/
    output = number * number;

    /*print the result on screen */ 
    printf("The square of %d is %d\n", number, output);
    return 0;



}
