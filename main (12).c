
#include <stdio.h>
#include <ctype.h>  

void PasarMinuscula(char texxto[]); 
int vocales(char texxto[]);


int main() {
    char cadena[100];
    int cantVocales;

    printf("Ingrese un texto: ");
    scanf("%s", cadena);   

    PasarMinuscula(cadena);  
    cantVocales = vocales(cadena);
    printf("Texto en minuscula: %s\n", cadena);
    printf("Cantidad de vocales: %d\n", cantVocales);

    return 0;
}


void PasarMinuscula(char texxto[]) {
    int i = 0;

    while (texxto[i] != '\0') {     
        texxto[i] = tolower(texxto[i]);
        i++;
    }
}
int vocales(char texxto[]) {
    int i = 0;
    int cont = 0;

    while (texxto[i] != '\0') {
        if (texxto[i] == 'a' || texxto[i] == 'e' ||
            texxto[i] == 'i' || texxto[i] == 'o' ||
            texxto[i] == 'u') {
            cont++;
        }
        i++;
    }

    return cont;
}