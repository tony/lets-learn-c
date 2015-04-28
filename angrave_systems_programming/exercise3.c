

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>
#include <stdlib.h>


//#define STDOUT_FILENO 1
//#define STDERR_FILENO 2

int main() {
    int count;
    mode_t mode = S_IRUSR | S_IWUSR;

    int filedes = open("output.txt", O_CREAT | O_TRUNC | O_RDWR, mode);
    if (filedes == -1) {
        perror("open failed");
        exit(1);
    }
    printf("filedes is %d\n", filedes);
    write(filedes, "Great!\n", 7);
    for(count = 5; count; count--) {
        write(STDOUT_FILENO, "Hello\n", 6);
        write(STDERR_FILENO, ".", 1);
    }
    close(filedes);
    return 79;
}
