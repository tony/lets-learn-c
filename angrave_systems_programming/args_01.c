#include <stdio.h>


int main(int argc, char* argv[]) {
    printf("argv[0]=%s\n", argv[0]);
    printf("argv[argc]=%p\n", argv[argc]);
    printf("argv = %d\n", argc);

    int count = 1;
    int sum = 0;
    for( ; count < argc; count++) {
        //printf("%d : %s\n", count, argv[count]);
        sum += atoi( argv[count] );

    }
    printf("Result: %d", sum);
}
