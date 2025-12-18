#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TVECTOR 50

int ContarMayor(int vector[], int tamanio);

int main() {
    int vector[TVECTOR];
    int i;

    srand(time(NULL));

    for(i = 0; i < TVECTOR; i++) {
        vector[i] = rand() % (20 - 10 + 1) + 10;
    }

    printf("\nVALORES DEL VECTOR:\n\n");
    for(i = 0; i < TVECTOR; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    int repeticiones = ContarMayor(vector, TVECTOR);

    printf("\nEl número mayor se repite %d veces.\n", repeticiones);

    return 0;
}

int ContarMayor(int vector[], int tamanio)
{
    int mayor = vector[0];
    int i;

    for(i = 1; i < tamanio; i++) {
        if(vector[i] > mayor) {
            mayor = vector[i];
        }
    }

    int contador = 0;
    for(i = 0; i < tamanio; i++) {
        if(vector[i] == mayor) {
            contador++;
        }
    }

    printf("\nEl mayor valor del vector es: %d\n", mayor);
    return contador;
}
