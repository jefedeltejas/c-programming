#include <stdio.h>

int main(void)
{

  int numbers[100];
  int index = 0;
  
  printf("Program asks for up to 100 numbers to print backward order.");
  printf("\nTo stop the loop, input the number 1137");

  while( index<100 || index!=1137)
  {
    printf("Enter the %d. number: ", index+1);
    scanf("%d", &numbers[index]);
    index++;
  }

  printf("The numbers in reverse order: ");

  for(index=99; index >= 0; index--)
  {
    printf("%d ", numbers[index]);
  }
}
