#include <stdio.h>

int main() {
    float celsius;


    printf("Entrez la temp�rature en degr�s Celsius : ");
    scanf("%f", &celsius);




    /* C < 0 : Solide
    0 <= C < 100 : Liquide
    C >= 100 : Gaz */





    if (celsius < 0) {
        printf("�  degr�s Celsius, l'eau est � l'�tat solide (glace)%f.\n", celsius);
    } else if (celsius >= 0 && celsius < 100) {
        printf("�  degr�s Celsius, l'eau est � l'�tat liquide %f.\n", celsius);
    } else {
        printf("�  degr�s Celsius, l'eau est � l'�tat gazeux (vapeur)%f.\n", celsius);
    }

    return 0;
}
