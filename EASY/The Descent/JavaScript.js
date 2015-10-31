/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/


// game loop
while (true) {
    var inputs = readline().split(' ');
    var spaceX = parseInt(inputs[0]);
    var spaceY = parseInt(inputs[1]);

    var max = 0;
    var pmax = -1;
    for (var i = 0; i < 8; i++) {
        var mountainH = parseInt(readline()); // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
        if (mountainH > max) {
            max = mountainH;
            pmax = i;
        }
    }

    if (spaceX == pmax) {
        print('FIRE');
    }else{
        print('HOLD');
    }

    // Write an action using print()
    // To debug: printErr('Debug messages...');

    // print('HOLD'); // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
}
