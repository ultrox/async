#include <stdio.h>

int main (void)
{
    int u, temp;

    printf("Please enter an integer.\n");
    scanf("%i", &u);

    while ( u % 10 != 0) {
        temp = u % 10;
        printf("%i", temp);
        u /= 10;
    }

    printf("\n");
}
