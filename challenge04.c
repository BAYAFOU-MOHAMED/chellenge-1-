#include <stdio.h>

int main() {
    float ms, Kmh;


    printf("Entrez a vitesse en kilom�tres par heure : ");
    scanf("%f", &Kmh);


    ms = Kmh * 0.27778;


    printf(" m�tres par seconde %f",ms);

    return 0;
}


//Challenge 4 : Conversion de la vitesse
//�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). Formule :

//m/s = km/h * 0.27778
