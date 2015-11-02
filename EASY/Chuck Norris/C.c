#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
int char_to_strbinary(char *in, char * out){
    
    for(int i=0; i<strlen(in) -1; i++){
        char c=in[i];
        c<<=1;
        for(int j=0; j<7; j++){
            *out++= '0' + ((c & 0b10000000)/0b10000000);
            c<<=1;
        }
    }
    return 0;
}
int main()
{
    char MESSAGE[100];
    fgets(MESSAGE,100,stdin);
    
    char T[800];
    memset(T,0,sizeof(T));
    
    char_to_strbinary(MESSAGE, T);
    
    for (int i=0; i<strlen(T);){

        if(T[i++]=='1'){
            printf("0 0");
            while(T[i]=='1'&& i<strlen(T)){
                printf("0");
                i++;
            }
        }
        else{
            printf("00 0");
            while(T[i]=='0' && i<strlen(T)) {
                printf("0");
                i++;
            }
            
        }
        if(i<strlen(T)) printf(" ");
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    

    return 0;
}
