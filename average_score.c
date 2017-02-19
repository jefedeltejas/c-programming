#include <stdio.h>

int main(void)
{
  int i, score, running_total;
  float average;
  
  printf("The program calculates the average of scores you enter.");
  printf("End with a negative integer.");
  while(score > 0)
  {
    printf("Enter score (4-10):");
    scanf("%d", &score);
    
    i++;
    running_total += score;
  }
  printf("Score total is", score);
  /* calculate avg */
  average = running_total / i;
  printf("Average score is %.2f", average);  
 
  return 0;
}
