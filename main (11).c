#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TVECTOR 100

int ContarMayor(int vector[], int tamanio);
int ContarMenor(int vector[], int tamanio);

int main() {
    int vector[TVECTOR];
    int i;

    srand(time(NULL));

    for(i = 0; i < TVECTOR; i++) {
        vector[i] = rand() % (40 - 10 + 1) + 10;
    }

    printf("\nVALORES DEL VECTOR:\n\n");
    for(i = 0; i < TVECTOR; i++) {
        printf("vector[%d] = %2d\n", i, vector[i]);
    }

    int repeticionesM = ContarMayor(vector, TVECTOR);

    printf("\nEl número mayor se repite %d veces.\n", repeticionesM);

    int repeticionesm = ContarMenor(vector,TVECTOR);
    printf("\nEl número menor se repite %d veces.\n", repeticionesm);

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
   
int ContarMenor(int vector[], int tamanio)
{
    int menor = vector[0];
    int i;

    for(i = 1; i < tamanio; i++) {
        if(vector[i] < menor) {
            menor = vector[i];
        }
    }
    
    int contador = 0;
    for(i = 0; i < tamanio; i++) {
        if(vector[i] == menor) {
            contador++;
        }
    }
    
    printf("\nEl menor valor del vector es: %d\n", menor);
    return contador;
}