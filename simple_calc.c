#include <stdio.h>

int sum(int, int);
float diff(int, int);
float product(int, int);

int main()
{
    int choice, first_number, second_number;
    do{

        printf("1:sum of two numbers\n2:difference of two numbers\n3:product of two numbers\n");
        printf("<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);
	printf("Enter the first number:");
	scanf("%d", &first_number);
	printf("Enter the second number:");
	scanf("%d", &second_number);
        if(choice < 0) {
          printf("Terminating the program...");
        }
        else if(choice == 1) {
          sum(first_number, second_number);
        }
        else if(choice == 2) {
          diff(first_number, second_number);
        }
        else if(choice == 3) {
          product(first_number, second_number);
        }
        else {
          printf("You entered an invalid number.\n\n");
        }
      }while(choice > 0);

      return 0;
}

int sum(int first_number, int second_number)
{
    int first_number, second_number, sum;

    sum = first_number + second_number;

    return sum;
}
