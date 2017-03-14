#include <stdio.h>

void sum(void);
void diff(void);
void product(void);

int num1, num2, diff, product;

int main()
{
    int choice;
    do{

        printf("1:sum of two numbers\n2:difference of two numbers\n3:product of two numbers\n");
        printf("<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);

        if(choice < 0) {
          printf("Terminating the program...\n");
	  return 0;
        }
	printf("Enter the first number:");
        scanf("%d", &num1);
        printf("Enter the second number:");
        scanf("%d", &num2);

        if(choice == 1) {
          sum();
        }
        else if(choice == 2) {
          diff();
        }
        else if(choice == 3) {
          product();
        }
        else {
          printf("You entered an invalid number.\n\n");
        }
      }while(choice > 0);

      return 0;
}

void sum(void)
{
    printf("%d + %d = %d\n\n", num1, num2, num1+num2);

}
void diff(void)
{   
    int diff;
    diff = num1-num2;
    printf("%d - %d = %d\n\n", num1, num2, diff);
}
void product(void)
{
    int product;
    product = num1 * num2;
    printf("%d * %d = %d\n\n", num1, num2, product);
}
