<?php
$br = (php_sapi_name() == "cli")? "":"<br>";

if(!extension_loaded('animal')) {
	dl('animal.' . PHP_SHLIB_SUFFIX);
}


$dog = new animal\Dog();

$dog->show();

?>
