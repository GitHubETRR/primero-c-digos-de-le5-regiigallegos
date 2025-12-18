#include <stdio.h>
#include <ctype.h>  

void PasarMinuscula(char texxto[]);   

int main() {
    char cadena[100];

    printf("Ingrese un texto: ");
    scanf("%s", cadena);   

    PasarMinuscula(cadena);     
    printf("Texto en minuscula: %s\n", cadena);

    return 0;
}


void PasarMinuscula(char texxto[]) {
    int i = 0;

    while (texxto[i] != '\0') {     
        texxto[i] = tolower(texxto[i]);
        i++;
    }
}