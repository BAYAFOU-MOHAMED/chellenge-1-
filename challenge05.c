#include <stdio.h>

int main() {
    float celsius;


    printf("Entrez la température en degrés Celsius : ");
    scanf("%f", &celsius);




    /* C < 0 : Solide
    0 <= C < 100 : Liquide
    C >= 100 : Gaz */





    if (celsius < 0) {
        printf("À  degrés Celsius, l'eau est à l'état solide (glace)%f.\n", celsius);
    } else if (celsius >= 0 && celsius < 100) {
        printf("À  degrés Celsius, l'eau est à l'état liquide %f.\n", celsius);
    } else {
        printf("À  degrés Celsius, l'eau est à l'état gazeux (vapeur)%f.\n", celsius);
    }

    return 0;
}
