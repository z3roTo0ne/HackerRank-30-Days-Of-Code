class Calculator {
    
  public:
    
    int power(int n, int p){
        
         if( n < 0 || p < 0 ) {
             
             throw invalid_argument("n and p should be non-negative");
             
        }
             
             int result = 1;
             
             while(p-- > 0){
                 
                 result = n * result;
             }
             
             return result;
             
         

    }
};

