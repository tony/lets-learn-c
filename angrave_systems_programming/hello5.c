

#include <unistd.h>


#define STDOUT_FILENO 1
#define STDERR_FILENO 2

int main() {
    int count;
    for(count = 5; count; count--) {
        write(STDOUT_FILENO, "Hello\n", 6);
        write(STDERR_FILENO, ".", 1);
    }
    return 79;
}
