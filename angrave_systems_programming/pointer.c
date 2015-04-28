#include <stdio.h>
#include <string.h>

int main() {
    /* int data[8]; */
    /*  */
    /* printf("data is at %p \n", data); */
    /* printf("data + 1 is at %p \n", data + 1); */
    /* printf("data + 2 is at %p \n", data + 2); */
    /*  */
    /* *(data) = 100; */
    /*  */
    /* *(data+1) = 101; */
    /* *(data+2) = 102; */
    /*  */
    /* data[2] = 102; */
    /* 2[data] = 102; // evalates to the same thing, crazy! */
    /*  */
    int i;
    int data[5] = {10, 30, 60, 50, 40};
    int int_size = sizeof(int);
    int data_size = sizeof(data);

    for (i=0; i < data_size / int_size; i++) {
        char message[80];
        char *buffer = message;
        
        if (i <= 0) {
            buffer += sprintf(buffer, "data[0]");
        } else {
            buffer += sprintf(buffer, "data[%d]", i);
        }
        buffer += sprintf(buffer, " is %d", data[i]);
        printf("%s\n", message);

    }

    return 0;
}
