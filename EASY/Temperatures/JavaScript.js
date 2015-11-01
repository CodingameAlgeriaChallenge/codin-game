 /**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

var n = parseInt(readline()); // the number of temperatures to analyse
var temps = readline(); // the n temperatures expressed as integers ranging from -273 to 5526

// Write an action using print()
// To debug: printErr('Debug messages...');

if (temps) {

    var tempArray = temps.split(' ');

    var min = tempArray[0];

    for(var i = 1; i< tempArray.length; i++){
        
        if (Math.abs(min) > Math.abs(tempArray[i])) {
            min = tempArray[i];
        }else if(Math.abs(min) == Math.abs(tempArray[i]) && min < tempArray[i]){
            min = tempArray[i];
        }

    }

    print(min);

}else{
    print(0);
}
