#include <stdio.h>

int main(void)
{
  int i = 1, score, average;

  while(score > 0)
  {
    printf("Enter score (4-10):");
    scanf("%d", &score);
    
    i++;
    score += 0;
  }
  /* calculate avg */
  average = score / i;
  printf("Average score is %d", average);  
 
  return 0;
}
