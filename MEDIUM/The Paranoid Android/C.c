k#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 #define RIGHT  1
 #define LEFT   0
 

int main()
{
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators
    
    
    scanf("%d%d%d%d%d%d%d%d", &nbFloors, &width, &nbRounds, &exitFloor, &exitPos, &nbTotalClones, &nbAdditionalElevators, &nbElevators);
    
    //struct elevator elevatorMap[nbElevators];
    
    int elevatorMap[nbFloors];
    for (int i = 0; i < nbElevators; i++) {
        int elevatorFloor; // floor on which this elevator is found
        int elevatorPos; // position of the elevator on its floor
        scanf("%d%d", &elevatorFloor, &elevatorPos);

        elevatorMap[elevatorFloor]=elevatorPos;
    }
    
    //algo
    int nextFloor=0;

    // game loop
    while (1) {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor
        char direction[10]; // direction of the leading clone: LEFT or RIGHT
        scanf("%d%d%s", &cloneFloor, &clonePos, direction);
        if(cloneFloor==nextFloor){
            if(exitFloor==cloneFloor){//search for exit
                if((clonePos>exitPos && !strcmp(direction,"RIGHT"))
                    || (clonePos<exitPos && !strcmp(direction,"LEFT"))){
                    nextFloor++;
                    printf("BLOCK\n");
                }else{
                    printf("WAIT\n"); // action: WAIT or BLOCK
                }    
                    
            }else{//search for elevator
                
                if((clonePos>elevatorMap[cloneFloor] && !strcmp(direction,"RIGHT"))
                    || (clonePos<elevatorMap[cloneFloor] && !strcmp(direction,"LEFT"))){
                    nextFloor++;
                    printf("BLOCK\n");
                }else{
                    printf("WAIT\n"); // action: WAIT or BLOCK
                    nextFloor++;
                } 
            }
        } 
        else{
            printf("WAIT\n"); // action: WAIT or BLOCK
        }
         
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");

    }

    return 0;
}
