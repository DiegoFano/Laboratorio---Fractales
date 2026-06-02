#include "turtlec.h"

void arbol(Turtle *t, float longitud, int profundidad){

    // Caso base
    if(profundidad == 0 || longitud < 5.0f)
        return;


    turtleForward(t, longitud);

    // Izquierda
    turtleLeft(t, 30.0f);
    arbol(t, longitud * 0.7f, profundidad - 1);

    // Derecha
    turtleRight(t, 60.0f);
    arbol(t, longitud * 0.7f, profundidad - 1);

    turtleLeft(t, 30.0f);
    turtleBackward(t, longitud);
}

int main(void){

    TurtleApp *app = turtleAppCreate(800, 600, "Arbol Fractal");

    if(app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtleSetColor(t, 0, 255, 0);
    turtleSetSpeed(t, 8.0f);

    turtlePenUp(t);
    turtleGoTo(t, 400.0f, 580.0f);
    turtlePenDown(t);

    // Apuntar hacia arriba
    turtleLeft(t, 90.0f);

    arbol(t, 80.0f, 7);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

