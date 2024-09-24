#include <stdio.h>

int main() {
    float kilometres, yards;


    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &kilometres);


    yards = kilometres * 1093.61;


    printf("%.2f kilomètres est égal à %.2f yards.\n", kilometres, yards);

    return 0;
}




