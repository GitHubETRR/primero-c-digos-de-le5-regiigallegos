#include <stdio.h>

int main()
{
    int AnioActual, MesActual,DiaActual;
    int AnioNac, MesNac, DiaNac, Edad; 
    do {
        printf("Ingrese el año en el que está (debe ser un número válido): \n");
        scanf ("%d", &AnioActual);
        if (AnioActual<=0){
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        }
    } while (AnioActual<=0); 
    
    do {
        printf ("Ingrese el mes en el que está (debe ser un número válido): \n");
        scanf ("%d", &MesActual);
        if ((MesActual<=0) || (MesActual>12)) {
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        }
    } while ((MesActual<=0) || (MesActual>12));
    
    do {
        printf ("Ingrese el día en el que está (debe ser un número válido) : \n");
        scanf ("%d", &DiaActual);
        if ((DiaActual<=0) || (DiaActual>31)) {
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        }
    } while ((DiaActual<=0) || (DiaActual>31));
    
    do {
        printf ("Ingrese el año en el que nació: \n");
        scanf ("%d", &AnioNac);
        if (AnioNac<=0) {
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        } else if (AnioNac>AnioActual) {
            printf ("El año ingresado es mayor al actual, usted aún no habría nacido. Intente de nuevo. \n");
        }
    } while ((AnioNac<=0) || (AnioNac>AnioActual)); 
    
    do {
        printf ("ingrese el mes en el que nació: \n");
        scanf ("%d", &MesNac);
        if ((MesNac<=0) || (MesNac>12)) {
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        }
    } while ((MesNac<=0) || (MesNac>12));
    
    do {
        printf ("Ingrese el día en el que nació: \n");
        scanf ("%d", &DiaNac);
        if ((DiaNac<=0) || (DiaNac>31)) {
            printf ("El valor ingresado no es válido. Intente de nuevo. \n");
        }
    } while ((DiaNac<=0) || (DiaNac>31));
    
    Edad= AnioActual - AnioNac; 
    if (MesNac > MesActual) {
        Edad-=1;
        printf("Usted tiene %d años \n", Edad);
    } else if ((MesNac==MesActual) && (DiaNac>DiaActual)) {
        Edad-=1;
        printf ("Usted tiene %d años \n", Edad);
    } else {
        printf ("Usted tiene %d años \n", Edad);
    }
    if ((MesNac==MesActual) && (DiaNac==DiaActual)) {
        printf ("\n ¡Feliz Cumpleaños!");
    }
    return 0;
}
