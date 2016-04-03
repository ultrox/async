#include <stdio.h>

int main (void)
{
    int n, square;

    printf("TABLE OF SQUARES\n"); 
    printf(" n    Square of n\n");
    printf("---   -----------\n");

    square = 0;

    for (n = 1; n <= 10; n++) {
        square = n * n;
        printf(" %2i           %3i\n", n, square);
    }

}
