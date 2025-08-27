#include <stdio.h>

int main(void) {

  int steps , counter;

  printf("Enter you Steps under five : "); //only for under 5
  scanf("%d" , &steps);
  
  counter = 0;
  while (counter <= steps && steps <=5) {
  printf("%d\n" , counter);
  counter++;
  }

return 0;
}

