class MyBook extends Book {
    
     function MyBook($t,$a,$p){
         
        $this->title = $t;
        $this->author = $a;
        $this->price = $p;
         
    } 
    
    public function display(){
        
        echo "Title: ". $this->title;
        echo "Author: ". $this->author;
        echo "Price: ". $this->price;
        
    }
}
