#include "cstl/cstl.h"

#include <stdio.h>
#include <stdint.h>

#define ast(x, y, type, ptr) {                                                                   \
    if ((x) != (y)) {                                                                            \
        printf("Expected " #ptr ", found " #ptr ". in line %d", (type)(y), (type)(x), __LINE__); \
        abort();                                                                                 \
    }                                                                                            \
}

#define asti(x, y) ast((x), (y), int, "%d")

int main()
{
    cArray* a = c_array_new(int, 10);

    int x = 0;
    c_get(a, 0, &x); asti(x, 0);
    int y = 18; c_set(a, 3, &y);
    c_get(a, 3, &x); asti(x, 18);

    c_free(a);
    return 0;
}

// vim: ts=4:sw=4:sts=4:expandtab:foldmethod=marker
