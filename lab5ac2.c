#include <stdio.h>

int main(void) {

      float BMI , wt_lb , ht_in;
  
      printf("Enter your weight in pounds : "); //using pounds
      scanf("%f" , &wt_lb);
      printf("Enter your height in inches : "); //using inches
      scanf("%f" , &ht_in);
  
   BMI = (wt_lb / (ht_in * ht_in)) * 703;

      if (BMI <= 18.5) {
          printf("Underweight");
      } else if (BMI <= 25) {
          printf("Nomal weight");
      } else if (BMI <= 30) {
          printf("Overweight");
      } else {
          printf("obese");
      }
return 0;
}
 
