#include <stdio.h>

int main()
{
  int i, check;
  for(i = 1; i < 22; i++)
  {
    check = printf("The current value of i is %d", i)

    if(check == EOF)
    {
      break;
    }
  }
  return 0;
}
