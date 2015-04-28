#include <stdio.h>
#include <stdlib.h>

extern char ** environ;

int main() {
    char* secret = getenv("SECRET");
    char ** ptr = environ;

    while (*ptr) {
        printf("%s\n", *ptr);
        ptr++;
    }
    
    if (secret == NULL) {
        printf("No secret");
    } else {
        printf("The secret is %s\n", secret);
    }
    exit(0);

    return 0;
}
