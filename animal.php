<?php
$br = (php_sapi_name() == "cli")? "":"<br>";

if(!extension_loaded('animal')) {
	dl('animal.' . PHP_SHLIB_SUFFIX);
}


$dog = new animal\Dog();

$dog->show();

var_dump($dog instanceof animal\IBase);

class Sheep implements animal\IBase {
	public function show() {
		echo "it is sheep\n";
	}
}

$s = new Sheep;
$s->show();
?>
