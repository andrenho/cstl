#ifndef CSTL_CSTL_H_
#define CSTL_CSTL_H_

#include "cstl/array.h"

#define c_free(X) _Generic((X), \
        cArray*: c_array_free	\
)(X)

#define c_get(X, pos, data) _Generic((X), \
        cArray*: c_array_get	\
)(X, pos, data)

#define c_set(X, pos, data) _Generic((X), \
        cArray*: c_array_set	\
)(X, pos, data)

#define c_getf(X, pos) _Generic((X), \
        cArray*: c_array_get	\
)(X, pos, data)

#define c_setf(X, pos, data) _Generic((X), \
        cArray*: c_array_get	\
)(X, pos, data)

#define c_data(X) _Generic((X), \
        cArray*: c_array_get	\
)(X)

#endif

// vim: ts=4:sw=4:sts=4:expandtab:foldmethod=marker
