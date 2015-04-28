#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int c=0x10203040;
    printf("%x\n", c);
    char buffer[12];
    gets(buffer);
    puts(buffer);
    printf("%x\n", c);
    /* while( (c=getchar()) != EOF) { */
    /*     if (c >= 32) c = c ^ 1; */
    /*     putchar(c); */
    /* } */
    return EXIT_SUCCESS;
}
