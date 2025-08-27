#include <stdio.h>

int main(void) {
  
   int positiveNumber;
 do {
    printf("Please enter a positive number : "); //only positive numbers accepted
    scanf("%d", &positiveNumber);
 } while (positiveNumber <=  0);
    printf("You entered : %d\n", positiveNumber);

return 0;
}
   

