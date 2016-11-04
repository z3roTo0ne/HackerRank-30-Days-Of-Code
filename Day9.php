<?php

$_fp = fopen("php://stdin", "r");

$n = fgets( $_fp );

echo factorial($n);
 
////////

function factorial($number) {    

    ($number < 2) ?  $factorial = 1 : $factorial = ($number * factorial($number-1));  

    return $factorial;
} 

?>
