<?php
ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);
?>


<?php echo "Привет, мир!\n"; ?>

<?php
$name = "Alex";
$age = 25;
$city = "Berlin";
?>

<?= "<br>";?>

<?php echo "Привет меня зовут ".$name." мне ".$age." лет, я живу в ".$city."." ; ?>

<?= "<br>";?>

<?php

$firstName = "Alex" ;
$lastName = "Pupkin";
$profession = "програмист";
$experience = 4;

echo "Привет меня зовут $firstName $lastName  я $profession с $experience годами опыта." ;
echo "<br>";

if ($experience < 1) {
	echo " $firstName $lastName Новичок";
} elseif ($experience >= 1 && $experience <=3) {
	echo " $firstName $lastName Младший специалист";
} elseif ($experience >= 4 && $experience < 6) {
	echo " $firstName $lastName Опытный программист";
} else {
	echo " $firstName $lastName Сеньор";
}

echo "<br>";

$a = 10;
$b = "10";

var_dump($a);
echo "<br>";
var_dump($b);

?>

<?php ?>