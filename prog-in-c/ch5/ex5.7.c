#include <stdio.h>

int main (void)
{
    int u, v, temp;

    printf("Please enter two non-negative integers.\n");
    scanf("%i%i", &u, &v);

    while ( v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("They're greatest common divisor is %i.\n", u);

}
