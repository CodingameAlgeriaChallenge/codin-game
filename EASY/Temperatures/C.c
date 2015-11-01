#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *  * Auto-generated code below aims at helping you parse
 *   * the standard input according to the problem statement.
 *    **/
int main()
{   int *mytemp;
    int n; // the number of temperatures to analyse
    scanf("%d", &n); fgetc(stdin);
    char temps[256]; // the n temperatures expressed as integers ranging from -273 to 5526
    fgets(temps,256,stdin); // the n temperatures expressed as integers ranging from -273 to 5526
    mytemp=temps;

    fprintf(stderr,"temps=%s\n",temps);
    int i;
    char *index;
    int min=10001,val;
    int val_abs;
    for(i=0;i<n-1;i++){
        index=strchr(mytemp, ' ');
        *index='\0';
        val=atoi(mytemp);
        fprintf(stderr,"val%d=%d\n",i,val);
        
        if((val<min && -val<min)||(val>min && -val>min)||(min==-val && min<0)){
            min=val;
        }
        mytemp=index+1;
    }
    val=atoi(mytemp);
    fprintf(stderr,"val%d=%d\n",n-1,val);
    if((val<min && -val<min)||(val>min && -val>min)){
        min=val;
    }
    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    //     // To debug: fprintf(stderr, "Debug messages...\n");
    //
    printf("%d\n",min);
   
    return 
}
