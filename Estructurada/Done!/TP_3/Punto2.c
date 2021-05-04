/*                                      *\
UAI                   Analista Programador
Programación Estructurada    Comisión 1-ON
                         TP 3
Tordoya, Gerardo               25-sep-2020
\*                                      */

////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalización.
	setlocale(LC_ALL, "");

	printf("Ingresar 20 notas y nombres de alumnos, indicar e imprimir los\n");
	printf("aplazados (menos de 4) y el nombre a quien pertenece esa nota\n");

	/* VARIABLES */
	char nombres[20];
	int notas[20];
	int x;

	/* INPUT */
	for (x=1;x<=20;x+=1) {
		printf("Dato %d * Ingrese nombre: ",x);
		scanf(" %c",&nombres[x-1]);
		printf("Dato %d * Ingrese nota: ",x);
		scanf("%d",&notas[x-1]);
		printf("\n");
	}

	/* OUTPUT */
	for (x=1;x<=20;x+=1) {
		if (notas[x-1]<4) {
			printf("Nombre: %c * Nota: %d\n",nombres[x-1],notas[x-1]);
		}
	}
	return 0;
}

