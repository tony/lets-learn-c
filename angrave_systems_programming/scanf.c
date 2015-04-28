#include <stdio.h>
#include <stdlib.h>

int main() {
    char * data = "Lawrence_TONYLONGBUFFERHEYHEY 20";
    char buffer[20];
    int score = -42;

    //int result = sscanf(data, "%19s %d", buffer, &score);
    int result = scanf("%19s %d", buffer, &score);

    printf("Result: %d, %s: %d", result, buffer, score);
    return EXIT_SUCCESS;
}
