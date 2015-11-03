#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *  * Auto-generated code below aims at helping you parse
 *   * the standard input according to the problem statement.
 *    **/
int main()
{
    int L;
    scanf("%d", &L); fgetc(stdin);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[256];
    fgets(T,256,stdin);
    for (int i = 0; i < H; i++) {
        char ROW[1024];
        fgets(ROW,1024,stdin);
        
        char ascii[30];
        for(int c=0;c<strlen(T)-1;c++){
            int index;
            if(T[c]>='A' && T[c]<='Z'){
                T[c]=T[c] -('A'-'a'); //rendre le charactère en miniscule
            }
            if(T[c]>='a' && T[c]<='z'){
                index= T[c] - 'a';   
            }else{
                index=1+ 'z' - 'a';
            }
            strncpy(ascii,ROW+index*L,L);
            ascii[L]='\0';
            printf("%s",ascii);
        }
        printf("\n");
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    //     // To debug: fprintf(stderr, "Debug messages...\n");
    return 0;
}
