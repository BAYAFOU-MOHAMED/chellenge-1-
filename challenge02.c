#include <stdio.h>


int main() {
    float celsius, kelvin;

    printf("Entrez la temp�rature en degr�s Celsius : ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f degr�s Celsius est �gal � %.2f Kelvin.\n", celsius, kelvin);

    return 0;
}
