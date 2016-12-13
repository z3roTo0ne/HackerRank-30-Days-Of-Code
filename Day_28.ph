<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$N);

$emails = array();

for($a0 = 0; $a0 < $N; $a0++){
    
    fscanf($handle,"%s %s",$firstName,$emailID);
    
    if(endsWith($emailID, "@gmail.com")){
        
        $emails[$emailID] = $firstName;
        
    }

}

asort($emails);

foreach($emails as $email => $name){
    
    echo $name . "\n";
    
}


//////Functions/////////////Functions/////////////Functions///////

function endsWith($haystack, $needle) {
    return $needle === "" || (($temp = strlen($haystack) - strlen($needle)) >= 0 && strpos($haystack, $needle, $temp) !== false);
}

?>
