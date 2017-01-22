// Demostrates if and else statements adn some of C's relational operators


    #define CURRENTYEAR 2013
    #include <stdio.h>

    int birth_year, age;

    int main(void)
    {
	printf("Enter the year you were born: ");
	scanf("%d", &birth_year);

	// Two tests to calculate whether the user was leap year birth 
	
	if (birth_year % 4 == 0)
	    printf("You were born in a leap year!\n");
	else
	    printf("You were not born in a leap year!\n");

	age = CURRENTYEAR - birth_year;

	// Can check on voting age as well as drinking age
	
	if (age >= 18)
	    printf("You can vote this year!\n");
	if (age < 21)
	    printf("It is illegal for you to get your drink on!");

	return(0);
    }
