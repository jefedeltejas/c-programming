#include <stdio.h>

int main(void)
{
    int integer = 0;
    float floating_point_number = 0.00;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    /* ask for a float */
    printf("Enter a decimal number:");
    scanf("%f", &floating_point_number);

    /* now print out usr entered values */
    printf("You entered the integer: %d\n", integer);

    printf("You entered the decimal number, rounded to two decimal places: %.2f", floating_point_number);
    return 0;
    

}
