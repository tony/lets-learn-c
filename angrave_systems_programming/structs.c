#include <stdlib.h>



struct Link {
    int value;
    struct Link* next;
};

typedef struct Link link_t;



int main() {
    link_t* ptr1 = (link_t*) malloc(sizeof(link_t));
    link_t* ptr2 = (link_t*) malloc(sizeof(link_t));

    ptr1->value = 42;
    ptr1->next = ptr2;

    ptr1->value = 43;
    ptr2->next = NULL;

    free(ptr1);
    free(ptr2);
    return 0;
}
