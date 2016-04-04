#include <stdio.h>

int main (void)
{
    int number;

    printf("Type in your number: \n");
    scanf("%i", &number);

    if (number < 0) {
        number = -number;
    }

    printf("The absolute value is %i\n", number);

}
