class Calculator : public AdvancedArithmetic {
    
  public:
    
    virtual int divisorSum(int n) override {
        
        int sum = 0;
        
        if(n == 1) return n;
       
        for (int i = 1; i <=n;i++) {
           
            if (n % i == 0) sum += i;
        }
        
        return sum;
    }
    
};
