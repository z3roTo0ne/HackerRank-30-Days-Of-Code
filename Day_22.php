	public function getHeight($root){

      if($root ==null) return -1;
        
      $left = self::getHeight($root->left);
      $right = self::getHeight($root->right);
       
      if($left > $right) return $left + 1;
      else return $right + 1;
      
    }
