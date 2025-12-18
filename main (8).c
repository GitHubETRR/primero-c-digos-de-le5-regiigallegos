#include <stdio.h>

int SumarVector(int vec[], int TVECTOR);
int PromedioVector(int suma, int TVECTOR);

int main()
{
    int suma;
    int promedio;
    int TVECTOR;

    printf("¡BIENVENIDO/A!\n\n");
    printf("Ingrese el tamaño de su vector: ");
    scanf("%d", &TVECTOR);
    
    int vec[TVECTOR];

    printf("\nREGISTRO DE NÚMEROS\n");
    for(int i = 0; i < TVECTOR; i++)
    {
        printf("Ingrese el valor del elemento %d: ", i + 1);
        scanf("%d", &vec[i]);
    }
     
    suma = SumarVector(vec, TVECTOR);
    printf("\nLa suma de todos los elementos del vector es: %d\n", suma);

    promedio = PromedioVector(suma, TVECTOR);
    printf("\nEl promedio de todos los elementos del vector es: %d\n", promedio);

    return 0;
}

int SumarVector(int vec[], int TVECTOR)
{
    int suma = 0;

    for(int i = 0; i < TVECTOR; i++)
    {
        suma = suma + vec[i];
    }

    return suma;
}

int PromedioVector(int suma, int TVECTOR)
{
    int promedio;
    promedio = suma / TVECTOR;
    return promedio;
}