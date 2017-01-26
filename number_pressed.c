#include<stdio.h>

int main(void)
{

int number_pressed;

    printf("Press a number from 1 to 4:");
    scanf("%i", &number_pressed);

    switch(number_pressed)
    {
	case 1:
	{
	    printf("You pressed the number 1.");
	    break;
	}
	case 2:
	{
	    printf("You pressed the number 2.");
	    break;
	}
	case 3:
	{
	    printf("You pressed the number 3.");
	    break;
	}
	case 4:
	{
	    printf("You pressed the number 4.");
	    break;
	}
	default:
	    printf("Your input is out of range. Fatal error.");

    }
    return(0);
}
