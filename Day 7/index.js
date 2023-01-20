// experimenting with javascript functions using Stanford's Karel IDE, here is the code for the same:

// aim: make Karel go from initial position to top right corner with beeper at the diagonals
function main(){
   
   reachTopRight();
   reachTopRight();
   reachTopRight();
   reachTopRight();
   putBeeper();
}
function reachTopRight(){
   putBeeper();
   move();
   turnLeft();
   move();
   turnRight();
}

// aim: to create chess-like structure
function main(){
   putBeeper();
   lineRight();
   lineLeft();
   lineRight();
   lineLeft();
   lineRight();
}
function lineRight(){
   move();
   move();
   putBeeper();   
   move();
   move();
   putBeeper();
}
function lineLeft(){
   turnLeft();
   move();
   turnLeft();
   move();
   putBeeper();
   move();
   move();
   putBeeper();
   move();
   turnRight();
   move();
   putBeeper();
   turnRight();
}