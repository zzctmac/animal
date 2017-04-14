#ifndef PHP_ANIMAL_ABSTRACT_H
#define PHP_ANIMAL_ABSTRACT_H


#define ANIMAL_NUM 	"num"

extern zend_class_entry *animal_abstract_ce;

PHP_METHOD(Animal, show);
#endif 