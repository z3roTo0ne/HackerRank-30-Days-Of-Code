<?php
$_fp = fopen("php://stdin", "r");
$x = fgets( $_fp );

for($j = 0; $j < $x; $j++){

$is_prime = 1;
    
$num = fgets( $_fp );
    
if(isPrimeNumber($num)) echo "Prime";
else echo "Not prime";

echo "\n";
    
}

function isPrimeNumber($i) {
    $n = 2;
    while ($n < sqrt($i)) {
        if ($i % $n) {
            $n++;
            continue;
        }

        return false;
    }

    return true;
}

?>
