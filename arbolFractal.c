#include "./turtlec.h"

void arbol(Turtle *t, int profundidad, float longitud){

    // Caso base
    if(profundidad == 0)
        return;
}

int main(void){

    TurtleApp *app = turtleAppCreate(800, 600, "Arbol Fractal");

    if(app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtleSetColor(t, 0, 255, 0);
    turtleSetSpeed(t, 8.0f);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}
