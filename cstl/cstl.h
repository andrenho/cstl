#ifndef CSTL_CSTL_H_
#define CSTL_CSTL_H_

#include "cstl/array.h"

#define c_free(X) _Generic((X), \
        cArray*: c_array_free	\
)(X)

#define c_get(X, pos, data) _Generic((X),           \
    cArray*: c_array_get	                        \
)(X, pos, data)

#define c_set(X, pos, data) _Generic((X),           \
    cArray*: c_array_set	                        \
)(X, pos, data)

#define c_getf(X, pos) _Generic((X),                \
    cArray*: c_array_get	                        \
)(X, pos, data)

#define c_setf(X, pos, data) _Generic((X),          \
    cArray*: c_array_get	                        \
)(X, pos, data)

#define c_data(X) _Generic((X),                     \
    cArray*: c_array_get	                        \
)(X)

#define c_front(X, data) _Generic((X),              \
    default: c_get((X), 0, (data))                  \
)

#define c_back(X, data) _Generic((X),               \
    default: { if (c_empty(X)) data = NULL; else c_get((X), c_size(X) - 1, (data)); } \
)

#endif

// vim: ts=4:sw=4:sts=4:expandtab:foldmethod=marker
