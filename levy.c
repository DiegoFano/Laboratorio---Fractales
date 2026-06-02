#include <math.h>
#include "../turtlec.h"

// Curva de Lévy
void levy(Turtle *t, int nivel, float tam){

    // Caso base
    if(nivel == 0){

        turtleForward(t, tam);

        return;
    }

    turtleLeft(t, 45.0f);

    levy(t, nivel - 1, tam / sqrtf(2.0f));

    turtleRight(t, 90.0f);

    levy(t, nivel - 1, tam / sqrtf(2.0f));

    turtleLeft(t, 45.0f);
}



int main(void){

    TurtleApp *app = turtleAppCreate(800, 600, "Curva de Levy");

    if(app == NULL)
        return 1;

    Turtle *t = turtleAppGetTurtle(app);

    turtleSetColor(t, 255, 255, 255);
    turtleSetSpeed(t, 10.0f);

    turtlePenUp(t);
    turtleGoTo(t, 250.0f, 350.0f);
    turtlePenDown(t);

    levy(t, 12, 300.0f);

    turtleAppRun(app);
    turtleAppDestroy(app);

    return 0;
}

