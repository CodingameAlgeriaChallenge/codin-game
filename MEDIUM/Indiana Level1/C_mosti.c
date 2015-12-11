#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
 
#define FALSE   0
#define TRUE    1
 
typedef struct point{
    int x;
    int y;
    struct point *next;
}point;
//recursive fuction

void pathFinder(struct point **path,int *map,int x, int y,int preX,int preY,int H,int W){
    

    switch(map[x*W+y]){//type
        case 0 :{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            break;
        }
        case 1 :{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
            printf("%d %d\n",y,x+1);
         
            break;
        }
        case 2 :{
            fprintf(stderr,"Path =%d %d // type=%d //prX=%d,prY=%d\n",x,y,map[x*W+y],preX,preY);
    
            if(preY==y-1){
                printf("%d %d\n",y+1,x);
                break;
            }
            if(preY==y+1){
                printf("%d %d\n",y-1,x);
                break;
            }else{
                break;
            }
                
        }
        case 3 :{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preX!=x-1){
                break;
            }
            printf("%d %d\n",y,x+1);
            break;
        }
        case 4 :{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preX==x-1){
                printf("%d %d\n",y-1,x);
                break;
            }
            else if(preY=y+1){
                printf("%d %d\n",y,x+1);
                break;
            }
            else
                break;
        }
        case 5 :{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preX==x-1){
                printf("%d %d\n",y+1,x);
                break;
            }
            else if(preY==y-1){
                printf("%d %d\n",y,x+1);
                break;
            }
            else
                break;
        }
        case 6:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preY==y-1){
                printf("%d %d\n",y+1,x);
                break;
                
            }if(preY==y+1){
                printf("%d %d\n",y-1,x);
                    break;
            }else{
                break;
            }
        }
        case 7:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preY==y-1){
                break;
            }
            printf("%d %d\n",y,x+1);
            break;
        }
        case 8:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preX==x-1){
                break;
            }
            printf("%d %d\n",y,x+1);
            break;
        }
        case 9:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
    
            if(preY==y+1){
                break;
            }
            printf("%d %d\n",y,x+1);
            break;
        }
        case 10:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
            if(preX==x-1){
                printf("%d %d\n",y-1,x);
                break;
                
            }else{
                break;
            }

        }
        case 11:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
           if(preX==x-1){
               printf("%d %d\n",y+1,x);
                break;
                
            }else{
                break;
            }
        }
        case 12:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
            if(preY==y+1){
                printf("%d %d\n",y,x+1);
                break;
                
            }else{
                break;
            }
        }
        case 13:{
            fprintf(stderr,"Path =%d %d // type=%d \n",x,y,map[x*W+y]);
            if(preY==y-1){
                printf("%d %d\n",y,x+1);
                break;
            }else{
                break;
            }
        }
    }

}

int main()
{
    int W; // number of columns.
    int H; // number of rows.
    scanf("%d%d", &W, &H); fgetc(stdin);
    int map[H][W];
    for (int i = 0; i < H; i++) {
        char LINE[201]; // represents a line in the grid and contains W integers. Each integer represents one room of a given type.
        fgets(LINE, 201, stdin); // represents a line in the grid and contains W integers. Each integer represents one room of a given type.
        //fprintf(stderr,"%s/////",LINE);
        
        char *tmp;
        int index=0;
        LINE[strlen(LINE)-1]='\0';
        for(int j=0;j<W; j++){
            int next=index;
             while(LINE[next]!=' ' && LINE[next]!='\0')next++;
             
            LINE[next]='\0';
            map[i][j]=atoi(LINE+index);
            fprintf(stderr,"%d\t",map[0][i*W+j]);
            
            index=next+1;
           
        }
        fprintf(stderr,"\n");
    }
    struct point *path=NULL;
    
    int EX; // the coordinate along the X axis of the exit (not useful for this first mission, but must be read).
    scanf("%d", &EX); fgetc(stdin);

    int v=1;
    int init=FALSE;
    // game loop
    struct point *tmp;
    while (1) {
        int XI;
        int YI;
        char POS[6];
        scanf("%d%d%s", &XI, &YI, POS); fgetc(stdin);
        fprintf(stderr,"XI%d, YI=%d, POS=%s\n",XI, YI, POS);
        
        if(!strcmp(POS,"TOP")){
            pathFinder(&path,map[0],YI,XI, YI-1, XI,H,W);
        }else if(!strcmp(POS,"DOWN")){
            pathFinder(&path,map[0],YI,XI, YI+1, XI,H,W);
        }else if(!strcmp(POS,"LEFT")){
            pathFinder(&path,map[0],YI,XI, YI, XI-1,H,W);
        }else if(!strcmp(POS,"RIGHT")){
            pathFinder(&path,map[0],YI,XI, YI, XI+1,H,W);
        } 
        
        
         
    }

    return 0;
}
