#include <stdio.h>

int main (void)
{
    int u, temp, result;

    printf("Please enter an integer.\n");
    scanf("%i", &u);

    result = 0;

    while ( u % 10 != 0) {
        temp = u % 10;
        result += temp;
        u /= 10;
    }
    
    printf("%i", result);

    printf("\n");
}
