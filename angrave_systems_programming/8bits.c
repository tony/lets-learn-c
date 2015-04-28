#include <stdio.h>

#include <limits.h>

int main() {
    printf("Hello C data types. int min & max \n %d %d\n", INT_MIN, INT_MAX);
    printf("char is %d bits\n", CHAR_BIT);

    printf("sizeof(int) is %d \n", sizeof(int));
    printf("sizeof(short) is %d \n", sizeof(short));
    printf("sizeof(long) is %d \n", sizeof(long));
    printf("sizeof(double) is %d \n", sizeof(double));
    printf("sizeof(char) is %d \n", sizeof(char));

    return 0;
}
