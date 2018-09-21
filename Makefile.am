#
# programs to build
#
lib_LIBRARIES    = libcstl.a
EXTRA_PROGRAMS   = test_cstl

#
# general flags and variables
#
AM_CPPFLAGS     = -Wall -Wextra -pipe $(CFLAGS) -I $(top_srcdir)/src
AM_LDFLAGS      = -fuse-ld=gold
ACLOCAL_AMFLAGS = -I build/m4
VALGRIND_OPTS   = --leak-check=full --show-leak-kinds=all --track-origins=yes --memcheck:leak-check=full

include_HEADERS = cstl/cstl.h cstl/array.h
libcstl_a_SOURCES = cstl/array.c

test_cstl_SOURCES = test/test.c
test_cstl_LDADD = libcstl.a

check: test_cstl
	./test_cstl

check-leaks: test_cstl
	valgrind $(VALGRIND_OPTS) ./test_cstl

# vim:ts=8:sts=8:sw=8:noexpandtab:foldmethod=marker
