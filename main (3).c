#include <stdio.h>

#define HORARIOS 1
#define MESAS 2
#define SALIDA 3
#define HORARIO_MIN 17
#define HORARIO_MAX 24
#define MESAS_2_MIN 8
#define MESAS_2_MAX 12
#define MESAS_4_MIN 12
#define MESAS_4_MAX 15

void muestra_horarios(void);

int main() {
    int opcion;
    int comensales;
    int caso;
    do {
        printf("\n=== BELEN´S RESTAURANT: MENÚ DE RESERVA DE HOY===\n");
        printf("\n→ Elija una opción:\n\n");
        printf("Ver horarios disponibles: presione 1.\n");
        printf("Ver mesas disponibles: presione 2.\n");
        printf("Salir: presione 3.\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case HORARIOS:
                muestra_horarios();
                break;

            case MESAS:
                printf("\n--- ASIGNACIÓN DE MESA ---\n");
                printf ("\nNuestro restaurante cuenta con 18 mesas enumeradas. \nDe acuerdo a la cantidad de comensales a asistir, se mostrarán aquellas que estén capacitadas \npara esa cantidad y no se encuentren reservadas.");
                do {
                    printf ("\nAclaración: Solo se permiten un máximo de 5 comensales por mesa. Las mesas que ya hayan sido reservadas \nno se mostrarán entre las opciones.");
                    printf ("\n\n→ Ingrese la cantidad de comensales a asistir:");
                    scanf("%d", &comensales);
                    switch (comensales){
                        case 1:
                            printf("Mesas disponibles para 1 comensal:\n");
                            printf ("\n→ Mesa 1");
                            printf ("\n→ Mesa 4");
                            printf ("\n→ Mesa 6");
                            break;
                        case 2:
                            printf ("Mesas disponibles para 2 comensales:\n");
                            muestra_horarios();
                            break;
                        case 3: 
                            printf ("Mesas disponibles para 3 comensales:\n");
                            printf ("\n→ Mesa 5");
                            printf ("\n→ Mesa 7");
                            break;
                        case 4:
                            printf ("Mesas disponibles para 4 comensales:\n");
                            printf ("\n→ Mesa 2");
                            for (caso = MESAS_4_MIN; caso < MESAS_4_MAX; caso++){
                            printf ("\n→ Mesa %d", caso );
                            }
                            break;
                        case 5: 
                            printf ("Mesas disponibles para 5 comensales:\n");
                            printf ("\n→ Mesa 3");
                            break;
                        default: 
                            printf("\nOpción inválida. Intente de nuevo.\n");
                    }
                } while  (comensales  != 5 && comensales != 4 && comensales !=3 && comensales !=2 && comensales !=1 );
                break;
            case SALIDA:
                printf("\nSaliendo del sistema... ¡Gracias por visitarnos!\n");
                break;

            default:
                printf("\nOpción inválida. Intentá de nuevo.\n");
                break;
        }

    } while (opcion != SALIDA); 

    return 0;
}

void muestra_horarios(void){
    int sub_opcion;
    printf("\n--- HORARIOS RESERVABLES ---\n");
    for (sub_opcion = HORARIO_MIN; sub_opcion < HORARIO_MAX; sub_opcion++){
        printf ("\n→ Horario: %dhs\n", sub_opcion );
    }
}