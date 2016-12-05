    Difference( vector<int> element){
        
        this -> elements = element;
        
    }

    void computeDifference(){
        
        int max = -999999999 , differences = 0;
        
        for (int element : elements) {
            
            for(int elementMinus : elements){
                
                differences = element - elementMinus;
                
                
                if(differences < 0){
                    
                    differences = 0 - differences;
                    
                }
                
                ///////////
                
                if(differences > max){
                    
                    max = differences;
                }
                
            }
           
        }
        
        maximumDifference = max;

    }
