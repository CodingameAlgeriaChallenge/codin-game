#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Don't let the machines win. You are humanity's last hope...
 **/


int main()
{
    int width; // the number of cells on the X axis
    scanf("%d", &width); fgetc(stdin);
    int height; // the number of cells on the Y axis
    scanf("%d", &height); fgetc(stdin);
    
    fprintf(stderr, "width=%d, height=%d\n",width,height);
    
    char matrix[height][width];
    for (int i = 0; i < height; i++) {
        char line[31]; // width characters, each either 0 or .
        fgets(line,31,stdin); // width characters, each either 0 or .
        fprintf(stderr, "line%d=%s\n",i,line);
        for(int j=0; j<width; j++){
           matrix[i][j]= line[j]=='0'?1:0;
        }
    }
    
    for (int i = 0; i < height; i++) {
        for(int j=0; j<width; j++){
           if(matrix[i][j]){
               printf("%d %d",j,i);
               
               int x2=i,y2=j;
               while(!matrix[x2][++y2] && y2<width );
               if(y2<width)printf(" %d %d",y2,x2);else printf(" -1 -1");
               
               int x3=i,y3=j;
               while(!matrix[++x3][y3] && x3<height );
               if(x3<height)printf(" %d %d",y3,x3);else printf(" -1 -1");
               
               printf("\n");
               
               j=y2-1;//optimisation
               
               
           }
        }
    }
    
    return 0;
}
