#include <stdio.h>


int main() {
    float celsius, kelvin;

    printf("Entrez la température en degrés Celsius : ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f degrés Celsius est égal à %.2f Kelvin.\n", celsius, kelvin);

    return 0;
}
