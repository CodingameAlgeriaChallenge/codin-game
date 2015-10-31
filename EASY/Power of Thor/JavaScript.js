/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

var inputs = readline().split(' ');
var lightX = parseInt(inputs[0]); // the X position of the light of power
var lightY = parseInt(inputs[1]); // the Y position of the light of power
var initialTX = parseInt(inputs[2]); // Thor's starting X position
var initialTY = parseInt(inputs[3]); // Thor's starting Y position

var thorX = initialTX;
var thorY = initialTY;

// game loop
while (true) {
    var remainingTurns = parseInt(readline()); // The remaining amount of turns Thor can move. Do not remove this line.

    // Write an action using print()
    // To debug: printErr('Debug messages...');

    //print('SE'); // A single line providing the move to be made: N NE E SE S SW W or NW

    var x = 0;
    var y = 0;
    if (thorX > lightX) {
        directionX = 'W';
        x--;
    }else{
        directionX = 'E';
        x++;
    }

    if (thorY > lightY) {
        directionY = 'N';
        y--;
    }else{
        directionY = 'S';
        thorY++;
    }


    if (thorX == lightX) {
        thorY += y;
        print(directionY);
        
    }else if(thorY == lightY) {
        thorX += x;
        print(directionX);
        
    }else {
        thorX += x;
        thorY += y;
        print(directionY+directionX);
        
    }

}
