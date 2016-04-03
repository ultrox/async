#include <stdio.h>

int main (void)
{
    int dollars, cents, counter;

    for (counter = 1; counter <= 10; counter++) {
        printf("Enter dollars:\n");
        scanf("%i", &dollars);
        printf("Enter cents: \n");
        scanf("%i", &cents);
        printf("%i.%.2i\n\n", dollars, cents);
    }

}
