#include "cstl/array.h"

#include <errno.h>
#include <string.h>

typedef struct cArray {
    size_t type_sz;
    size_t size;
    void** data;
} cArray;

// 
// CONSTRUCTOR/DESTRUCTOR
//

cArray*
c_array_new_(size_t type_sz, size_t size)
{
    cArray* a = malloc(sizeof(cArray));
    a->type_sz = type_sz;
    a->size = size;
    a->data = calloc(type_sz, size);
    return a;
}

int
c_array_free(cArray* a)
{
    free(a->data);
    free(a);
    return 0;
}

//
// ACCESS
//
int
c_array_getf(cArray* a, size_t pos, void* element)
{
    memcpy(element, a->data + (pos * a->type_sz), a->type_sz);
    return 0;
}

int
c_array_setf(cArray* a, size_t pos, void* element)
{
    memcpy(a->data + (pos * a->type_sz), element, a->type_sz);
    return 0;
}

int
c_array_get(cArray* a, size_t pos, void* element)
{
    if (pos >= a->size) {
        errno = ERANGE;
        return ERANGE;
    }
    return c_array_getf(a, pos, element);
}

int
c_array_set(cArray* a, size_t pos, void* data)
{
    if (pos >= a->size) {
        errno = ERANGE;
        return ERANGE;
    }
    return c_array_setf(a, pos, data);
}

void*
c_array_data(cArray* a)
{
    return a->data;
}

//
// CAPACITY
//

bool
c_empty(cArray* a)
{
    return a->size == 0;
}

int
c_size(cArray* a)
{
    return a->size;
}

// vim: ts=4:sw=4:sts=4:expandtab:foldmethod=marker
