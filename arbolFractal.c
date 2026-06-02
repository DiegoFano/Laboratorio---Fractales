#include "./turtlec.h"

void arbol(Turtle *t, int profundidad, float longitud){

    // Caso base
    if(profundidad == 0)
        return;

    // Izquierda

    turtleLeft(t, 30.0f);
    turtleForward(t, longitud);

      arbol(t, profundidad - 1, longitud * 0.7f);

      turtleBackward(t, longitud);

    // Derecha

    turtleRight(t, 60.0f);
    turtleForward(t, longitud);

      arbol(t, profundidad - 1, longitud * 0.7f);

      turtleBackward(t, longitud);
   

      turtleLeft(t, 30.0f);
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

    turtleLeft(t, 90.0f);

    turtleForward(t, 80.0f);

    arbol(t, 7, 60.0f);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}
