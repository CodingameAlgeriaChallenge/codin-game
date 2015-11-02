#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // Number of elements which make up the association table.
    scanf("%d", &N); fgetc(stdin);
    int Q; // Number Q of file names to be analyzed.
    scanf("%d", &Q); fgetc(stdin);
    
    char MIME_type[N][512];
    char MIME_ext[N][128];
    for (int i = 0; i < N; i++) {
        char EXT[100]; // file extension
        char MT[500]; // MIME type.
        scanf("%s%s", EXT, MT); fgetc(stdin);
        strcpy(MIME_type[i],MT);
        strcpy(MIME_ext[i],EXT);
        
    }
    
   
    for (int i = 0; i < Q; i++) {
        char FNAME[500]; // One file name per line.
        fgets(FNAME,500,stdin); // One file name per line.
        
        //get file extention
        char *file_ext=FNAME;
        while(NULL!=strchr(file_ext,'.')){
            file_ext=strchr(file_ext,'.')+1;
        }
        
        *(file_ext+strlen(file_ext) -1)='\0';//remove '\n' at the end
        
        if(file_ext==FNAME ||  NULL==strchr(FNAME,'.')){
            printf("UNKNOWN\n");
            continue;
        }
        int num;
        for( num=0;num<N;num++){
            if(!strcasecmp(file_ext,MIME_ext[num])){
                break;    
            }
        }
        if(num==N){
            printf("UNKNOWN\n");
        }else{
            printf("%s\n",MIME_type[num]);
        }
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    
    return 0;
}
