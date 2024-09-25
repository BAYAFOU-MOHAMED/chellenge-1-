#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, moyGeo;


    printf("Entrez le premier nombre : ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);
    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);



     meyGeo = cbrt(a * b * c);
     printf("la mey-geo de %f, %f, %f, %f ", a, b, c,meyGeo);

    return 0;
}
