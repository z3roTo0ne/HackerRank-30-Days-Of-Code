<?php

$_fp = fopen("php://stdin", "r");

$n = fgets( $_fp );

echo factorial($n);
 
////////

function factorial($number) { 

        if ($number < 2) { 
            
            return 1; 
            
        } else { 
            
            return ($number * factorial($number-1));
            
        } 
} 

?>
