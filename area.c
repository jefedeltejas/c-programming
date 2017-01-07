#include <stdio.h>

int radius, area;

int main(void) 
{
    /* prompt the user for radius  */
    printf( "Enter radius (i.e. 10): ");
    
    
    /* take the input from the console   */
    scanf("%d", &radius);
    
    /* calculate area with radius given by usr input  */ 
    area = (int) (3.14159 * radius * radius);
    /* print the result in the console  */
    printf("\n\nThe area of the circle (pi*r^2)= %d\n", area);
    /* close the program  */
    return 0;

}
