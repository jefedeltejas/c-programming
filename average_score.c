#include <stdio.h>

int main(void)
{
  int i;
  float score, running_total, average;
  
  running_total = 0;
  i = 0;

  printf("The program calculates the average of scores you enter.\n");
  printf("End with a negative integer.\n");
  while(score >= 0)
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
