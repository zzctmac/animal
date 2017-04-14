#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_animal.h"
#include "animal_interface.h"
#include "animal_abstract.h"

zend_class_entry *animal_abstract_ce;

const zend_function_entry animal_class_functions[] = {
    PHP_ME(Animal, show, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};

PHP_MINIT_FUNCTION(animal_abstract)
{
    zend_class_entry ce;
    INIT_CLASS_ENTRY(ce, "animal\\Animal", animal_class_functions);
    animal_abstract_ce = zend_register_internal_class_ex(&ce, NULL );
    animal_abstract_ce->ce_flags |= ZEND_ACC_EXPLICIT_ABSTRACT_CLASS;

    zend_declare_property_null(animal_abstract_ce, ZEND_STRL(ANIMAL_NUM), ZEND_ACC_PUBLIC);

    zend_class_implements(animal_abstract_ce, 1, animal_interface_ce);

    return SUCCESS;
}


PHP_METHOD(Animal, show)
{
    php_printf("This is show\n");
}