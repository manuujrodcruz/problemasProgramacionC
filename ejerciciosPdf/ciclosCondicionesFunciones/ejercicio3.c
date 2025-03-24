#include <stdio.h>
#include <stdlib.h>
#include "ejercicio3.h"

int numerosComprendidos(int numero){
    if(numero == 0){
        printf("%d", numero);
        return numero;
    }
    printf("%d + ", numero);
    return numero + numerosComprendidos(numero-1);
}
