#include <stdio.h>

int main(void) {

   int number , x;

   printf("Enter the number you want to get multiplication : ");
   scanf("%d" , &number);
   
   
   for (x = 1 ; x <= 5 ; x++) {
     printf("%d\n", x * number);
   }

return 0; 
}
   
   
