#include <iostream>
#include <string>

using namespace std;


int main() {

    int t, n =0;
    
    cin >> t;

    for(int i = 0; i < t; i++){
     
        string str;

        cin >> str;  
        

        for(int i = 0; i < str.length(); i = i+2){
            
            cout << str[i];            
        }
        
        
        cout << " ";
        
        for(int i = 1; i < str.length(); i = i+2){
            
            cout << str[i]; 
        }
        
        cout << endl;
        
     }
    
    return 0;
}
