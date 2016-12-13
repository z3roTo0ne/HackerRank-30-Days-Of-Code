#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    void maxAND(int , int);
    
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        
        maxAND(n,k);
        
    }
    
    return 0;
}


void maxAND(int N , int K){
    
    int result = 0;
    
	for (int A = 1; A <= N; A++) {
            
		for (int B = A + 1; B <= N; B++) {
                
			int current = A & B;
                
			if (current > result && current < K) result = current;
				
		}
	}

    printf("%d", result);
    
}
