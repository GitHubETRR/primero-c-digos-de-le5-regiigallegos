#include <stdio.h>
int SumarVector(int vec[], int TamVECTOR);


int main()
{
    int TamVECTOR;
    printf("¡BIENVENIDO/A!\n\n");
    printf("Ingrese el tamaño de su vector:");
    scanf("%d", &TamVECTOR);
    
    int vec[TamVECTOR];
    printf("\nREGISTRO DE NÚMEROS\n");
        for(int i = 0; i < TamVECTOR; i++)
    {
        printf("Ingrese el valor del elemento %d: ", i+1);
        scanf("%d", &vec[i]);
    }
     
     int suma = SumarVector (vec, TamVECTOR);
     printf("\nLa suma de todos los elementos del vector es: %d\n", suma);

    return 0;
}

int SumarVector(int vec[], int TamVECTOR)
{
    int suma = 0;
    for(int i = 0; i < TamVECTOR; i++)
    {
        suma = suma + vec[i];
    }
    return suma;
}


