#include <stdio.h>

int main() {
    float kilometres, yards;


    printf("Entrez la distance en kilom�tres : ");
    scanf("%f", &kilometres);


    yards = kilometres * 1093.61;


    printf("%.2f kilom�tres est �gal � %.2f yards.\n", kilometres, yards);

    return 0;
}




