#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int count=0;
    int highest=0,mountain;
    char fire=0;
    // game loop
    while (1) {
        int spaceX;
        int spaceY;
        scanf("%d%d", &spaceX, &spaceY);
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            scanf("%d", &mountainH);
            
            if(mountainH>highest){
                mountain=i;
                highest=mountainH;
            }
        }
        fprintf(stderr,"mountain=%d\n",mountain);
        fprintf(stderr,"spaceX=%d  spaceY=%d\n",spaceX,spaceY);

        if(spaceX==mountain && !fire){
            printf("FIRE\n");
            fire=1 ;
        }else
            printf("HOLD\n");
       // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

        //printf("FIRE\n"); // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
        count++;
        if(count%8==0){
            fire=0;
            highest=0;
        }
    }

    return 0;
}
