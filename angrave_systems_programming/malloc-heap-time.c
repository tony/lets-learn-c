#include <stdio.h>
#include <stdlib.h>

#include <string.h>


char* currenttime() {
    char* result = malloc(128);
    if ( !result ) {
        return result;
    }

    strcpy(result, "2:51 PM");
    return result;
}

int main() {
    char* time_ptr = currenttime();
    printf("%s", time_ptr);
    free(time_ptr);
    return 0;
}
