/* Demonstration of frequently used escape sequences  */

#include <stdio.h>

#define QUIT  3

int get_menu_choice( void );
void print_report( void );

int main( void )
{

  int choice = 0;

  printf("\"We\'d like to welcome you to the menu program\"\n");
  printf("Are you ready to make a choice\?\n");
  while (choice != QUIT)
  {
  
    choice = get_menu_choice();
    
    if (choice == 1)
	printf("\nBeeping the computer\a\a\a");
    else
    {
	if (choice == 2)
	    print_report();
    }
  
  }

}
