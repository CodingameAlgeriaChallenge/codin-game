#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);
    fprintf(stderr, "lightX=%d lightY=%d\n",lightX,lightY);
    int posX=initialTX,posY=initialTY;
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        scanf("%d", &remainingTurns);

        fprintf(stderr, "PosX=%d====lightX=%d /// PosY=%d====lightY=%d\n",posX,lightX,posY,lightY);
    
        if(posY>lightY && posY>1){
            printf("N");
            posY--;
        }
        if(posY<lightY && posY<17){
            printf("S");
            posY++;
        }
        if(posX<lightX && posX<39){
            printf("E");
            posX++;
        }
        
        if(posX>lightX && posY>1){
            printf("W");
            posX--;
        }
        
        printf("\n");
    }

    return 0;
}
