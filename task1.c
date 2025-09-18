#include <stdio.h>

void calculate(int *x, int *y, int *z) {
    int a = *x, b = *y, c = *z;

    *x = a + b + c;      // sum of three variables
    *y = a - b;          // difference between first two variables
    *z = a * c;          // product of first and third variables
}

int main() {
    int x, y, z;

    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    printf("Enter value for z: ");
    scanf("%d", &z);

    calculate(&x, &y, &z);

    printf("Modified x (sum): %d\n", x);
    printf("Modified y (difference): %d\n", y);
    printf("Modified z (product): %d\n", z);

    return 0;
}