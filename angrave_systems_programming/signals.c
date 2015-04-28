#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

void nothankyou (int signal) {
    write(1, "No!", 3);
}

void alarm_cb (int signal) {
    write(1, "Woo", 3);
}


int main() {
    alarm(7);

    
    char* ptr = getenv("HOME");

    signal(SIGINT, nothankyou);
    signal(SIGALRM, alarm_cb);

    while(1) {
        puts(ptr);
        sleep(3);
    }

    return EXIT_SUCCESS;
}
