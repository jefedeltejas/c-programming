#include <stdio.h>

/*  Program takes 3 ints from user then
 *    then the function determines and returns
 *    smallest and largest
 *  */


int minNum(int, int, int);
int maxNum(int, int, int);

int num1, num2, num3, min, max;

int main(void)
{

    printf("Enter the 1. number:");
    scanf("%d", &num1);
    printf("Enter the 2. number:");
    scanf("%d", &num2);
    printf("Enter the 3. number:");
    scanf("%d", &num3);
    
    min = minNum(num1, num2, num3);
    max = maxNum(num1, num2, num3);
    printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.\n", max, min);
 
    return 0;
}

int minNum(int a, int b, int c)
{
    if(a < b && a < c)
    {
      return a;
    }else if(b < a && b < c)
    {
      return b;
    }else{
      return c;
    }

}

int maxNum(int g, int t, int s)
{
/* doesn't matter what I name the vars :) -dueces  */

    if(g > t && g > s)
    {
      return g;
    }else if(t > g && t > s)
    {
      return t;
    }else {
      return s;
    }
}
