#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_animal.h"
#include "dog.h"
#include "animal_abstract.h"

zend_class_entry *dog_ce;

const zend_function_entry dog_class_functions[] = {
    PHP_ME(Dog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};

PHP_MINIT_FUNCTION(dog)
{
    zend_class_entry ce;
    INIT_CLASS_ENTRY(ce, "animal\\Dog", dog_class_functions);
    dog_ce = zend_register_internal_class_ex(&ce, animal_abstract_ce );

    return SUCCESS;
}

PHP_METHOD(Dog, __construct)
{
    php_printf("This is construct\n");
}