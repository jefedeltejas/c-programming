#include <stdio.h>

int main(void)
{
  int number_entered, square;
  do
  {
    printf("Enter an integer (exit with a negative number): ");
    scanf("%d", &number_entered);

    square = number_entered * number_entered;

    if(number_entered >= 0) {
      printf("The square of the number you entered: %d\n", square);
    }
    else if(number_entered < 0) {
      printf("Exit program...\n");
    }
  }
  while(number_entered > 0);

  return 0;
}
