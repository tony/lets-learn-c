#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char* currenttime() {
    char* result = malloc(128);
    if ( !result ) {
        return result;
    }

    time_t secondsSince1970 = time(NULL);
    char* timeASCII = ctime(&secondsSince1970);
    strcpy(result, timeASCII);
    return result;
}

int main() {
    char* time_ptr = currenttime();
    printf("%s", time_ptr);
    free(time_ptr); time_ptr = NULL;
    return 0;
}
