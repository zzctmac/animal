#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_animal.h"
#include "dog.h"

zend_class_entry *dog_ce;

const zend_function_entry dog_class_functions[] = {
    PHP_ME(Dog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(Dog, show, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};

PHP_MINIT_FUNCTION(dog)
{
    zend_class_entry ce;
    INIT_CLASS_ENTRY(ce, "animal\\Dog", dog_class_functions);
    dog_ce = zend_register_internal_class(&ce TSRMLS_CC );

    return SUCCESS;
}

PHP_METHOD(Dog, __construct)
{
    php_printf("This is construct\n");
}

PHP_METHOD(Dog, show)
{
    php_printf("This is show\n");
}