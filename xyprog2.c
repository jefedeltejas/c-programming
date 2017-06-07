#include <stdio.h>

int x, y;

int main(void)
{
    /* This program has a nested loop. The 
 *  * purpose is observe and figure out what the 
 *   * program performs in action. From the looks
 *    * of it, I'd say it's gonna print 10 new lines
 *     * and then print 10 X's. Run it to see.
 *      *
 *       * */

    for ( x = 0; x < 10; x++, printf( "\n" ) )
        for ( y = 0; y < 10; y++ )
            printf( "%c", 1);


    return 0;
}
