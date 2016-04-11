#include <stdio.h>
#include <string.h>

int main (void)
{
    char *nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int entry;
    char final[] = "";
    char new[] = "";

    printf("Enter a number ");
    scanf("%i", &entry);

    while (entry) {
        int result = entry % 10;
        entry /= 10;
        strcpy(new, nums[result]);
        strcat(new, final);
        strcpy(final, new);
        free(new);
    }
    printf("%s\n", final);
}
