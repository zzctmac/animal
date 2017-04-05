dnl $Id$
dnl config.m4 for extension animal

dnl Comments in this file start with the string 'dnl'.
dnl Remove where necessary. This file will not work
dnl without editing.

dnl If your extension references something external, use with:

dnl PHP_ARG_WITH(animal, for animal support,
dnl Make sure that the comment is aligned:
dnl [  --with-animal             Include animal support])

dnl Otherwise use enable:

 PHP_ARG_ENABLE(animal, whether to enable animal support,
 Make sure that the comment is aligned:
 [  --enable-animal           Enable animal support])

if test "$PHP_ANIMAL" != "no"; then
  dnl Write more examples of tests here...

  dnl # --with-animal -> check with-path
  dnl SEARCH_PATH="/usr/local /usr"     # you might want to change this
  dnl SEARCH_FOR="/include/animal.h"  # you most likely want to change this
  dnl if test -r $PHP_ANIMAL/$SEARCH_FOR; then # path given as parameter
  dnl   ANIMAL_DIR=$PHP_ANIMAL
  dnl else # search default path list
  dnl   AC_MSG_CHECKING([for animal files in default path])
  dnl   for i in $SEARCH_PATH ; do
  dnl     if test -r $i/$SEARCH_FOR; then
  dnl       ANIMAL_DIR=$i
  dnl       AC_MSG_RESULT(found in $i)
  dnl     fi
  dnl   done
  dnl fi
  dnl
  dnl if test -z "$ANIMAL_DIR"; then
  dnl   AC_MSG_RESULT([not found])
  dnl   AC_MSG_ERROR([Please reinstall the animal distribution])
  dnl fi

  dnl # --with-animal -> add include path
  dnl PHP_ADD_INCLUDE($ANIMAL_DIR/include)

  dnl # --with-animal -> check for lib and symbol presence
  dnl LIBNAME=animal # you may want to change this
  dnl LIBSYMBOL=animal # you most likely want to change this 

  dnl PHP_CHECK_LIBRARY($LIBNAME,$LIBSYMBOL,
  dnl [
  dnl   PHP_ADD_LIBRARY_WITH_PATH($LIBNAME, $ANIMAL_DIR/$PHP_LIBDIR, ANIMAL_SHARED_LIBADD)
  dnl   AC_DEFINE(HAVE_ANIMALLIB,1,[ ])
  dnl ],[
  dnl   AC_MSG_ERROR([wrong animal lib version or lib not found])
  dnl ],[
  dnl   -L$ANIMAL_DIR/$PHP_LIBDIR -lm
  dnl ])
  dnl
  dnl PHP_SUBST(ANIMAL_SHARED_LIBADD)

  PHP_NEW_EXTENSION(animal, animal_interface.c dog.c  animal.c, $ext_shared,, -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1)
fi
