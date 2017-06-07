/* Lets user enter up to 10 integers
 * Values are stored in a an array named value. If 99 is
 * entered, the loop stops		  */

#include<stdio.h>

int main(void)
{

int value[10];
int ctr = 0;
int nbr;
while (ctr < 10 && nbr != 99)
{
  puts("Enter a number, 99 to quit");
  scanf("%d", &nbr);
  value[ctr] = nbr;
  ctr++;
}

return 0;
}
