#include <stdio.h>

int main(void)
{

  int numbers[100];
  int index;

  for(index=0; index<100; index++)
  {
    printf("Enter the %d. number: ", index+1);
    scanf("%d", &numbers[index]);
  }

  printf("The numbers in reverse order: ");

  for(index=99; index >= 0; index--)
  {
    printf("%d ", numbers[index]);
  }
}
