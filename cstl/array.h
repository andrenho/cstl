#ifndef CSTL_ARRAY_H_
#define CSTL_ARRAY_H_

#include <stdbool.h>
#include <stdlib.h>

typedef struct cArray cArray;

// constructor / destructor
#define c_array_new(type, size) (c_array_new_(sizeof(type), (size)))
int     c_array_free(cArray* a);

// access
int     c_array_getf(cArray* a, size_t pos, void* element);
int     c_array_setf(cArray* a, size_t pos, void* element);
int     c_array_get(cArray* a, size_t pos, void* element);
int     c_array_set(cArray* a, size_t pos, void* data);
void*   c_array_data(cArray* a);

// capacity
bool    c_empty(cArray* a);
size_t  c_size(cArray* a);

// helper functions (do not call these directly)
cArray* c_array_new_(size_t type_sz, size_t size);

#endif

// vim: ts=4:sw=4:sts=4:expandtab:foldmethod=marker
