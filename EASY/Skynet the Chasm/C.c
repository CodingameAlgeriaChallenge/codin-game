#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int road; // the length of the road before the gap.
    scanf("%d", &road);
    int gap; // the length of the gap.
    scanf("%d", &gap);
    int platform; // the length of the landing platform.
    scanf("%d", &platform);
    char jumped=0;
    int jumpPos=road -1;
    fprintf(stderr,"jumpPos=%d\n",jumpPos);
    // game loop
    while (1) {
        int speed; // the motorbike's speed.
        scanf("%d", &speed);
        int coordX; // the position on the road of the motorbike.
        scanf("%d", &coordX);

        if(!jumped){
            if(coordX==jumpPos){
                printf("JUMP\n");
                jumped=1;
            }else if(speed==gap+1){
                printf("WAIT\n");
            }else if(speed<=gap){
                printf("SPEED\n");
            }else {
                printf("SLOW\n");
            }
        }else{
            printf("SLOW\n");
        }
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        
    }

    return 0;
}
