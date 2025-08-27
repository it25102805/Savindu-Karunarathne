#include <stdio.h>

int main(void) {
    
    float GPA;
 
    printf("Enter your GPA : ");
    scanf("%f", &GPA);

     if (GPA >= 0.00 && GPA <= 4.00) {
          if (GPA >= 3.5) {
              printf("Highest honors for semester\n");
          } else if (GPA >= 3.0) {
              printf("Dean's list for semester\n");
          } else if (GPA >= 2.0) {
              printf("\n");
          } else if (GPA >= 1.0) {
              printf("On probation for next semester\n");
          } else  {
              printf("failed semester - registration suspended\n");
          }

     } else {
         printf("Enter the correct GPA\n");
     }

return 0;
}
