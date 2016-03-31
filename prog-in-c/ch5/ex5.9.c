#include <stdio.h>

int main (void)
{
    int u, temp;

    printf("Please enter an integer.\n");
    scanf("%i", &u);

    do {
        temp = u % 10;
        printf("%i", temp);
        u /= 10;
    }
    while ( u % 10 != 0);
    
    printf("\n");
}
