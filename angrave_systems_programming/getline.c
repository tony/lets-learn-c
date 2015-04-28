#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>


int main() {
    char *buffer = NULL;
    size_t buf_size = 0;

    ssize_t result = getline(&buffer, &buf_size, stdin);

    if (result > 0 && buffer[result-1] == '\n') {
        buffer[result-1] = 0;
    }
    printf("%d : %s\n", result, buffer);
    
    return EXIT_SUCCESS;
}
