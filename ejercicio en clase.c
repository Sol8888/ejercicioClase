#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno {
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio;
};

int main() {
    struct alumno alumnos[5];

    for (int i = 0; i < 5; i++) {
        printf("Ingrese los datos para el alumno %d:\n", i + 1);

        printf("Nombre del alumno: ");
        fflush(stdout);
        gets(alumnos[i].nombre);

        printf("Direccion del alumno: ");
        fflush(stdout);
        gets(alumnos[i].direccion);

        printf("Carrera del alumno: ");
        fflush(stdout);
        gets(alumnos[i].carrera);

        printf("Edad del alumno: ");
        scanf("%d", &alumnos[i].edad);

        printf("Promedio del alumno: ");
        scanf("%f", &alumnos[i].promedio);

        
        while (getchar() != '\n')
            continue;

        
        system("clear"); 
    }

    printf("Datos de los alumnos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAlumno %d:\n", i + 1);
        puts(alumnos[i].nombre);
        puts(alumnos[i].direccion);
        puts(alumnos[i].carrera);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
    }

    return 0;
}
