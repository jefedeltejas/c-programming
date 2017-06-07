#include <stdio.h>

int main(void)
{
	//variables 
	int choice, num1, num2, diff, sum, prod;
			
	printf("1: subtraction\n2: addition\n3: multiplication\nSelect function:");
	scanf("%i", &choice);
						
	printf("Enter the first number:");
	scanf("%i", &num1);
									
	printf("Enter the second number:");						scanf("%i", &num2);
	
	switch(choice) 								            { 
              case 1:
	      {
	        diff = num1 - num2;
		printf("%i-%i=%i", num1, num2, diff);
		break;
	      }	
	      case 2:
	      {
		sum = num1 + num2;
		printf("%i+%i=%i", num1, num2, sum);
		break;
	      }
	      case 3:
	      {
	        prod = num1 * num2;
		printf("%i*%i=%i", num1, num2, prod);
		break;
	      }
	      default:
		printf("Your input is outside the allowed range.");
	    }
	return(0);
}
