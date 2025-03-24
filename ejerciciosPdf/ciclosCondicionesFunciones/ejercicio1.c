#include <stdio.h>
#include <stdlib.h>
#include "ejercicio1.h"

void imprimirNumeroPantalla(){
    int numero, cantidad;
    printf("Digite el numero a imprimir: ");
    scanf("%d", &numero);

    printf("Digite la cantidad de veces a imprimir: ");
    scanf("%d", &cantidad);

    for(int i = 0; i < cantidad; i++){
        printf("%d\n", numero);
    }
}
