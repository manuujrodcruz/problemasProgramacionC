#include <stdio.h>
#include <stdlib.h>
#include "ejercicio2.h"

float convertidorMetros()
{

    printf("--------------------------------------------------------------------------");
    printf("Hola, programa para convertir una longitud en pies y pulgadas a metros.\n");
    printf("--------------------------------------------------------------------------");

    //variables
    int pies, pulgadas;

    printf("Digite la longitud en pies: ");
    scanf("%d", &pies);

    printf("\nDigite las pulgadas (0-12): ");
    scanf("%d", &pulgadas);

    float metro;
    metro = (pies * 0.3048) + (pulgadas * 0.0254);\
    printf("La cantidad en metros es -> %.2f", metro );
    return metro;
}
