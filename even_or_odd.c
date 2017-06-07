/* Even or odd program  */
#include<stdio.h>

int main(void)
{
    int number, output;
	
    printf("Enter an integer: ");
    scanf("%i", &number);
	
    // determine if even or odd
    output = number%2; 		
    printf("The number is %i", output);
 				
    return(0);
}
