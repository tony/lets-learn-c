#include <stdio.h>


void change(char* p) {
    while(*p) {
        if (*p == 'l') *p = '*';
        p++;
    }
}

char* find_char(char* letter, char* p) {
    while(*p) {
        if (*p == letter) return p;
        p++;
    }
    return p;
}

int main() {
    //char* ptr = "Hello World";
    char array[] = "Hello World";

    //change(array);
    //     printf("%s\n", array);
    char* result = find_char('o', array);
    printf("%s\n", result);

    return 0;
}


