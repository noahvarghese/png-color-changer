#ifndef COLORNH
#define COLORNH

#include <stdbool.h>

typedef struct c_node
{
    int *color;
    struct c_node *previous;
    struct c_node *next;
} c_node;

#endif

bool rgba_is_equal(int *origin, int *compare);