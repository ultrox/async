#include <stdio.h>

int main(int argc, char *argv[])
{
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n",
                names[i], ages[i]);
    }

    printf("---\n");

    int *cur_age = ages;
    char **cur_name = names;

    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
                *(cur_name + i), *(cur_age + i));
    }

    printf("---\n");

    for (i = 0; i < count; i++) {
        printf("%s is %d years old again.\n",
                cur_name[i], cur_age[i]);
    }

    printf("---\n");

    for (cur_name = names, cur_age = ages;
            (cur_age - ages) < count;
            cur_name++, cur_age++)
    {
        printf("%s lived %d years so far.\n",
                *cur_name, *cur_age);
    }
    
    for (i = 0; i < count; i++) {
        printf("Age pointer is %p; name pointer is %p.\n", cur_age[i], cur_name[i]);
    }

    for (i = 0; i < count; i++) {
        printf("Age pointer is %p; name pointer is %p.\n", &ages[i], &names[i]);
    }

    int age_size = sizeof(cur_age);
    int name_size = sizeof(cur_name);
    int ages_size = sizeof(ages);
    int names_size = sizeof(names);

    printf("age %d; name %d\n", age_size, name_size);
    printf("ages %d; names %d\n", ages_size, names_size);

    return 0;
}
