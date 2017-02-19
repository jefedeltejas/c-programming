#include <stdio.h>

int main(void)
{
  int i = 1, score;
  float average;

  while(score > 0)
  {
    printf("Enter score (4-10):");
    scanf("%d", &score);
    
    i++;
    score += 0;
  }
  printf("Score total is", score);
  /* calculate avg */
  average = score / i;
  printf("Average score is %.2f", average);  
 
  return 0;
}
