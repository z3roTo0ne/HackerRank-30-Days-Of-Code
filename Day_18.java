public class Solution {
   
    // -----------------------------Stack Methods -----------------------------//
    
  
    Stack<Character> stack = new Stack<Character>();
    
    void pushCharacter(char ch){
        stack.push(ch);
    }
    
    char popCharacter() {
        return stack.pop();
    }

 
    // -----------------------------Queue Methods -----------------------------//

    
    Queue<Character> queue = new LinkedList<Character>();

     void enqueueCharacter(char ch){
        queue.add(ch);
     }
    
    char dequeueCharacter() {
        return queue.remove();
    }
    
