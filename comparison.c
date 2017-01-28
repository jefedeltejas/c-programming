#include<stdio.h>

int main(void)
{
    char gender;
    int age;

    printf("Are you male or female (m/f)?");
    scanf("%c", &gender);

    printf("Enter your age:");
    scanf("%i", &age);

    //run conditionals for gender and age

    if(gender == 'm' && age > 55 && age <= 100) {
	printf("You are a wise man!\n");
    }
    else if(gender == 'm' && age >= 0 && age <= 55) {
	printf("You are a man in your best years!\n");
    }
    else if(gender == 'f' && age > 55 && age <= 100) {
	printf("You look young for your age!\n");
    }
    else if(gender == 'f' && age >= 0 && age <=55) {
	printf("You are a beauty!\n");
    }
    else
	printf("An error occurred in the program!\n");
    
    return(0);
}
