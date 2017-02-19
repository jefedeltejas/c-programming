#include <stdio.h>

int main(void)
{
  int i;
  float score, total, average;
  
  i = 0;

  printf("The program calculates the average of scores you enter.\n");
  printf("End with a negative integer.\n");
  do
  {
    printf("Enter score (4-10):");
    scanf("%f", &score);
    
    if(score >= 0){
    
      total += score;
      i++;
    }
    else if(score < 0) {
      break;
    }
  }while(score > 0);
  printf("You entered %i scores\n", i);
  printf("Total: %.2f", total);
  /* calculate avg */
  average = total/i;
  printf("Average score: %.2f", average);  
 
  return 0;
}
