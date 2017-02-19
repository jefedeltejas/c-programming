#include <stdio.h>

int main(void)
{
  int i;
  float score, running_total, average;
  
  running_total = 0;
  i = 0;

  printf("The program calculates the average of scores you enter.\n");
  printf("End with a negative integer.\n");
  do
  {
    printf("Enter score (4-10):");
    scanf("%d", &score);
    
    if(score >= 0){
    
      running_total += score;
      i++;
    }
    else if(score < 0) {
      break;
    }
  }while(score > 0);
  printf("You enterd %i scores\n", i);
  /* calculate avg */
  average = running_total / i;
  printf("Average score: %.2f", average);  
 
  return 0;
}
