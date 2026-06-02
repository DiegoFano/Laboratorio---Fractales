#include <math.h>
#include "turtlec.h"

void levy(Turtle *turtle, float length, int depth){
    if(depth == 0){
        turtleForward(turtle, length);
        return;
    }

    turtleLeft(turtle, 45);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleRight(turtle, 90);
    levy(turtle, length / sqrt(2), depth - 1);

    turtleLeft(turtle, 45);
}
