#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    printf("Hello\n");

    pid_t child_id = fork();

    if( child_id > 0) {
        int status;
        waitpid(child_id, &status, 0);
        puts("I'm the grouchy parent!");
    }

    if (child_id == 0) {
        puts("I'm the carefree child");
    }

    //printf("%d Process id %d\n", child_id, getpid());

    return EXIT_SUCCESS;
}

int main_forkmania() {
    printf("Hello\n");

    while(1) {
        fork();
        printf("%d\n", getpid());
        sleep(2);
    }

    printf("World\n");
    return EXIT_SUCCESS;
}
