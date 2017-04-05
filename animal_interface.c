#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_animal.h"
#include "animal_interface.h"


zend_class_entry *animal_interface_ce;

zend_function_entry animal_interface_methods[] = {
    ZEND_ABSTRACT_ME(Animal, show,  NULL)
    {NULL, NULL, NULL}
};

PHP_MINIT_FUNCTION(animal_interface)
{
    zend_class_entry ce;
    INIT_CLASS_ENTRY(ce, "animal\\IBase", animal_interface_methods);
    animal_interface_ce = zend_register_internal_interface(&ce TSRMLS_CC );

    return SUCCESS;
}