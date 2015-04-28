#include <stdlib.h>
#include <stdio.h>
#include <string.h>



struct Link {
    char* key;
    char* value;
    struct Link* next;
};

typedef struct Link link_t;


link_t* link_create(char* akey, char* avalue) {
    printf("Creating link %s -> %s", akey, avalue);
    link_t* result = (link_t*) malloc(sizeof(link_t));
    result -> key = strdup(akey);
    result -> value = strdup(avalue);
    return result;
}

void link_destroy(link_t* ptr) {
    free(ptr->key);
    free(ptr->value);
    memset(ptr, 0, sizeof(link_t)); // remove dangling pointers
}

int main() {

    link_t* ptr = link_create("test", "testvalue");
    printf("here is my string: %s -> %s.\n", ptr->key, ptr->value);
    link_destroy(&ptr);
    if (ptr == NULL) {
        printf("Pointer successfully destroyed.");
    }
    return 0;
}
