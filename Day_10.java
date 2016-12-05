import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        String binary = convertToBaseTwo(n);
        
        String[] split = binary.split("0+");
        Arrays.sort(split);
        
        int maxLength = split[split.length - 1].length();

        System.out.println(maxLength);
        
    }
    
     public static String convertToBaseTwo(int decimal){
         
        String str="";

        while(decimal != 1){
            
            str = (decimal % 2) + str;
            decimal = decimal / 2;

        }
         
        return (1+str);

    }

} 
