import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int R = in.nextInt();
        int L = in.nextInt();

        // Write an action using System.out.println()
        // To debug: System.err.println("Debug messages...");
        ArrayList<Integer> oldLine=new ArrayList<Integer>();
        ArrayList<Integer> newLine;
        
        if(L==1){
            System.out.println(R);
            return;
        }
        
        oldLine.add(R);
        
        for(int i=2; i<=L; i++){
            newLine=new ArrayList<Integer>();
            
            for(int n=0; n<oldLine.size();){
                int val=oldLine.get(n++);
                int count=1;
                while( n<oldLine.size() && oldLine.get(n)==val){count++;n++;}
                newLine.add(count);
                newLine.add(val);
                
            }
            
            oldLine=newLine;
            for(int j=0; j<oldLine.size(); j++){
                System.err.print(""+oldLine.get(j)+" ");
            }
            System.err.println("");

        }
        
        
        
        for(int i=0; i<oldLine.size()-1; i++){
            System.out.print(""+oldLine.get(i)+" ");
        }
            
        System.out.println(oldLine.get(oldLine.size()-1));
    }
}
