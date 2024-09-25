# Start.
AC_PREREQ([2.61])
AC_INIT([micro_install], [0.0.0], [micro-install-talk@lists.sourceforge.net])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall gnu foreign subdir-objects])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADER([include/config.h])


# Check for programs.
AC_PROG_CXX

# Checks for libraries.
# Checks for header files.
AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
# Checks for library functions.

# Config Files.
AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([include/Makefile])
AC_CONFIG_FILES([src/Makefile])

#Check For LibXML++ Library.
PKG_CHECK_MODULES(MICRO_INSTALL_LIBXML,libxml++-2.6 >= 2.6.0)
AC_SUBST(MICRO_INSTALL_LIBXML_CFLAGS)
AC_SUBST(MICRO_INSTALL_LIBXML_LIBS)

#Check For GTK+
#PKG_CHECK_MODULES(GTK_PACKAGE,gtk+-2.0 >= 1.3.13)
#AC_SUBST(GTK_PACKAGE_CFLAGS)
#AC_SUBST(GTK_PACKAGE_LIBS)

#Check For GTK-MM Libraries
PKG_CHECK_MODULES(MICRO_INSTALL_GTK_MM,gtkmm-2.4 >= 1.3.3)
AC_SUBST(MICRO_INSTALL_GTK_MM_CFLAGS)
AC_SUBST(MICRO_INSTALL_GTK_MM_LIBS)
# End.

#PKG_CHECK_MODULES(MICRO_INSTALL_ACE,ace >= 5.4.5)
#AC_SUBST(MICRO_INSTALL_ACE_CFLAGS)
#AC_SUBST(MICRO_INSTALL_ACE_LIBS)


#PostgreSQL Configuration Information. Currently Removed. Using OTL.
#MySQL Library Configuration. Currently Removed. Using OTL.

#Checking for OTL
AC_CHECK_HEADERS([/usr/include/otl/otlv4.h])

AC_OUTPUT:

