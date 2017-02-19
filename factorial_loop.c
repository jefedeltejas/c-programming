#include <stdio.h>

int main(void)
{
  int i, factorial, user_number;

  printf("Enter an integer: \n");
  scanf("%i", &user_number);

  for(i = 0; i <= user_number; i++)
  {
    factorial *= i;
  }
  
  printf("The factorial of %i is %i\n", user_number, factorial);

  return 0;
}
