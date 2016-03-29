#include <stdio.h>

void evenMulti (int x, int y) 
{
    printf("The next largest even multiple of %i for %i is %i\n",
        x, y, x + y - x % y);
}


int main (void)
{
    int a = 365;
    int b = 12258;
    int c = 996;

    int d = 7;
    int e = 23;
    int f = 4;

    evenMulti(a, d);
    evenMulti(b, e);
    evenMulti(c, f);

}
