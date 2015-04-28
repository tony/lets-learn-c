#include <stdio.h>

int main(int argc, char *argv[]) {

    // Create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n",
                names[i], ages[i]);
    }

    int *cur_age = ages;
    char **cur_name = names;

    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n",
                *(cur_name+1), *(cur_age+i));
    }

    return 0;
}
