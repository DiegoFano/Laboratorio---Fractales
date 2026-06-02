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

