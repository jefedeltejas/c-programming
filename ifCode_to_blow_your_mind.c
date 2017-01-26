/* this code will blow your frickin mind  */

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter an integer: ");
    scanf("%i", &x);

    // now a set of conditionals
    if(x < 0) {
	printf("X is less than zero - the title of an awesome 80's movie.\n");
    }

    else if(x > 0) {
	if(x < 10) {
            printf("X is greater than zero and less than 10.\n");
	}else{
	    printf("X is greater than ten.\n");
	}
    }

    else {
        printf("X is equal to zero.\n");
    }

    return(0);
}
 
