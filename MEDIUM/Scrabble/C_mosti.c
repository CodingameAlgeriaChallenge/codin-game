#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    
    int N;
    //int val[]={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z}
    int val[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    
    
    scanf("%d", &N); fgetc(stdin);
    char dict[N][32];
   
    for (int i = 0; i < N; i++) {
        fgets(dict[i], 31, stdin);
        
        fprintf(stderr,"%s",dict[i]);
    }
    fprintf(stderr,"------------------------\n");
    int index=0;
    int maxVal=0;
    char LETTERS[9];
    fgets(LETTERS, 9, stdin);
    
    int lenstr=strlen(LETTERS);
    fprintf(stderr,"%s",LETTERS);
    
    for(int i=0; i<N; i++){
        int vali=0;
        
        int nbMatch=0;
        char W[32];
        strcpy(W,LETTERS);
        
        fprintf(stderr,"------------------------\n");
        fprintf(stderr,"Dict=%s",dict[i]);
        fprintf(stderr,"LETTERS=%s",W);
        
        
        for(nbMatch=0; nbMatch<strlen(dict[i]) && nbMatch<strlen(W); nbMatch++){
            char l=dict[i][nbMatch];
            
            fprintf(stderr,"%c",l);
            
            char *ptn=strchr(W,l);//find the letter
            if(ptn==NULL){//doesn't exist
                break;
            }
            else{
                vali+=val[l-'a'];
                *ptn=' ';//remove the letter
            }
        }
        fprintf(stderr,"\nnbMatch=%d  strlen(dict[i])=%d\n",nbMatch,strlen(dict[i]));
        
        if(nbMatch==strlen(dict[i])){//fond a match
            fprintf(stderr,"vali=%d\n",vali);
        
            if(vali>maxVal){
                index=i;
                maxVal=vali;
            }
        }
        
    }
    fprintf(stderr,"------------------------\n");
        
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    printf("%s",dict[index]);

    return 0;
}
