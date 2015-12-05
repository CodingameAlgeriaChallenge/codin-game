import java.util.*;
import java.io.*;
import java.math.*;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution {
    
    static int log20(double x){int val;x+=1; for(val=0; x>20; x/=20, val++); return val;};
    static long exp20(int x){long  val=1; for(int i=0;i<x;i++)val*=20; return val;}

    static long mayaToNumber(String numMaya[], String glob[], int H, int L){
        int val=0;
        for(val=0; val<20;val++){
            int i=0;
            for(i=0; i<H; i++){
                if(!numMaya[i].equals(glob[i].substring(L*val,L*(val+1))))
                    break;
            }
            if(i==H)
                break;
        }
        return val;
    }

    public static String[] digitToMaya(int digit,  String glob[], int H, int L){
        
        if(digit>=20)
            return null;
            
        String numMaya[]=new String[H];
        for(int i=0; i<H; i++){
            numMaya[i]=glob[i].substring(L*digit,L*(digit+1));
        }
        return numMaya;
    }
    
    static void numPrintMaya(long num, String glob[], int H, int L){
        
        int puissance=log20(num);
        
        while(puissance>=0){
            long exp=exp20(puissance);
            long val=num/exp;
            
            String valMaya[]=digitToMaya((int)val, glob, H, L);
            for(int i=0; i<valMaya.length; i++){
                System.out.println(valMaya[i]);
            }
            num=num - val*exp;
            puissance--;
        }

    }

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int L = in.nextInt();
        int H = in.nextInt();
        
        String glob[]=new String[H];
        for (int i = 0; i < H; i++) {
            glob[i] = in.next();
        }
        
        
        int S1 = in.nextInt();
        int puissance1=S1/H -1;
        String maya1[]= new String[H];
        long val1=0;
        
        for (int i = 0; i < S1; i++) {
            maya1[i%H] = in.next();
            
            if((i+1)%H==0){
                long tmp=mayaToNumber(maya1,glob,H,L);
                val1+=tmp*exp20(puissance1);
                puissance1--;
            }
            
        }
        System.err.println("----Val1="+val1+"----");
        
        int S2 = in.nextInt();
        int puissance2=S2/H -1;
        String maya2[]= new String[H];
        long val2=0;
        for (int i = 0; i < S2; i++) {
            maya2[i%H] = in.next();
            if((i+1)%H==0){
                long tmp=mayaToNumber(maya2,glob,H,L);
                val2+=tmp*exp20(puissance2);
                puissance2--;
            }
        }
        
        System.err.println("----Val2="+val2+"----");
        
        String operation = in.next();
        
        System.err.println("Operation="+operation);
        
        long val=0;
        
        if(operation.equals("+")){
            val=val1+val2;
        }
        if(operation.equals("-")){
            val=val1-val2;
        }
        if(operation.equals("*")){
            val=val1*val2;
        }
        if(operation.equals("/")){
            val=val1/val2;
        }
        
        numPrintMaya(val, glob, H, L);
    }
}
