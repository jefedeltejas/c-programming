#include <stdio.h>

int main(void)
{
  int user_integer, i;

  printf("Enter an integer: ");
  scanf("%d", &user_integer);

  for(i = 1; i <= user_integer; i++)
  {
    printf("%d", i);
  }
  return 0;
}
