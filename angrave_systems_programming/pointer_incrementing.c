#include <stdio.h>
#include <string.h>

int main() {
    printf("Size of hello is %d\n", sizeof("hello"));

    char* ptr = "A B C 0123";
    int len = strlen(ptr);
    int count = 0;

    while(*ptr != 0 ) {
        printf("%c %d\n", *ptr, *ptr);
        ptr ++;
        count ++;
    }
    printf("Characters we found: %d\n", count);


    printf("Strlen returned %d\n", len);

    char* hello = "Hello World";
    int i;
    for(i = strlen(hello); i >= 0; i--) {
        printf("%c", hello[i]);
    }

    return 0;
}
