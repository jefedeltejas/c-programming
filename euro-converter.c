#include <stdio.h> 

float euro, markka, conversion-rate = 0.00, 0.00, 5.94573;

int main(void) 
{
	// prompt usr for data 
	printf("Enter an amout in FIM:");
	scanf("%f", &markka);
	
	//calculate amount
	euro = markka / conversion-rate;

	//output
	printf("FIM converted to euro: "%.2f", euro);

	return 0;
}
