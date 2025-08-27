#include <stdio.h>

int main(void) {

    int x;
    char status;
  
    for (x = 1 ; x  <=5 ; x++) {
    printf("Enter the status of the order %d  as I ,V ,S : " ,   x);
    scanf(" %c" , &status);

        if(status == 'I') {
        printf("Skip the order %d\n"   ,x);
           continue;
        }

        if(status == 'S') {
        printf("Stopping at order  %d\n"   ,x);
           break;
        }

        if(status == 'V') {
        printf("prcessing order  %d\n"   ,x);
        }

    }


return 0;
}
        
