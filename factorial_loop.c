#include <stdio.h>

int main(void)
{
  int i, factorial, user_number;

  printf("Enter an integer: ");
  scanf("%i", &user_number);

  for(i = 1; i <= user_number; i++)
    factorial *= i;
  
  printf("The factorial of %i is %i\n", user_number, factorial);

  return 0;
}
