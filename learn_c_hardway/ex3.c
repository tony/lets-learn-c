#include <stdio.h>

int main() {
    int age = 10;
    int height = 72;
    int i;

    for (i=0; i < 10000; i++) {
        printf("I am %d years old.\n", age * i);
    }
    printf("I am %d inches tall.\n", height);
    printf("I am %d inches tall.\b", height);
    printf("\nI am %d inches tall.", height);
    printf("\rI am %d inches tall.", height);
    printf("\vI am %d inches tall.", height);

    return 0;
}
