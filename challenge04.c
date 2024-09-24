#include <stdio.h>

int main() {
    float ms, Kmh;


    printf("Entrez a vitesse en kilomètres par heure : ");
    scanf("%f", &Kmh);


    ms = Kmh * 0.27778;


    printf(" mètres par seconde %f",ms);

    return 0;
}


//Challenge 4 : Conversion de la vitesse
//Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

//m/s = km/h * 0.27778
