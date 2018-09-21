#
# autoconf configuration
#
AC_INIT([cstl], [0.1.0])		# initialize autoconf
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign subdir-objects 1.13])
#AM_GNU_GETTEXT([external])
AC_PREREQ([2.69])			# minimal autoconf version
AC_CONFIG_SRCDIR([cstl/array.c])   	# test if file exists
AC_CONFIG_MACRO_DIRS([build/m4])
AM_SILENT_RULES([yes])
AC_PROG_RANLIB

# 
# check for compiler info
#
AC_PROG_CC
CFLAGS+=" -std=c11 -D_DEFAULT_SOURCE"
PKG_PROG_PKG_CONFIG

# 
# check for libraries
#

#
# check for headers
#

# 
# output
#
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

# vim:ts=8:sts=8:sw=8:noexpandtab
