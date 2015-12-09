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
        int N = in.nextInt();
        String dict[]=new String[N];
        
        int val[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
        int indexMax=0;
        int valMax=0;
        
        in.nextLine();
        for (int i = 0; i < N; i++) {
            dict[i] = in.nextLine();
        }
        String LETTERS = in.nextLine();
        
        for(int i=0;i<N; i++){
            String letters=new String(LETTERS);
            int nbMatch=0;
            int vali=0;
            
            for(nbMatch=0; nbMatch<letters.length() && nbMatch<dict[i].length(); nbMatch++){
                char l=dict[i].charAt(nbMatch);
                int index=letters.indexOf(l);
                if(index<0){
                    break;
                }else{
                    vali+=val[l-'a'];
                    //remove the letter from the squence 
                    char letters_char[]=letters.toCharArray();
                    letters_char[index]=' ';
                    letters=String.copyValueOf(letters_char);
                }
                
            }
            
            if(nbMatch==dict[i].length()){
                if(vali>valMax){
                    valMax=vali;
                    indexMax=i;
                }
            }
            
        }
        
        // Write an action using System.out.println()
        // To debug: System.err.println("Debug messages...");

        System.out.print(dict[indexMax]);
    }
}
