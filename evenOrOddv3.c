#include<stdio.h>

int main(void)
{
       
    int number_entered;

    printf("Enter an integer: ");
    scanf("%i", &number_entered);

    if(number_entered%2 == 0)
        printf("\nNumber %i is even.", number_entered);
    else
	printf("\nNumber %i is odd.", number_entered);

    return(0);
    
}
