#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);


    int minY=0,maxY=H,minX=0,maxX=W;
    int x=X0,y=Y0;
    // game loop
    while (1) {
        char BOMB_DIR[3]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", BOMB_DIR);
        
        if(strchr(BOMB_DIR,'U')!=NULL){
            maxY=y;
            y=(y+minY)/2;
        }
        if(strchr(BOMB_DIR,'D')!=NULL){
            minY=y;
            y=(y+maxY)/2;
        }
        if(strchr(BOMB_DIR,'R')!=NULL){
            minX=x;
            x=(x+maxX)/2;
        }
        if(strchr(BOMB_DIR,'L')!=NULL){
            maxX=x;
            x=(x+minX)/2;
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        printf("%d %d\n",x,y); // the location of the next window Batman should jump to.
    }

    return 0;
}
