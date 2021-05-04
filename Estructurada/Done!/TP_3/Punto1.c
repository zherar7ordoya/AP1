/*                                      *\
UAI                   Analista Programador
Programaci�n Estructurada    Comisi�n 1-ON
                         TP 3
Tordoya, Gerardo               25-sep-2020
\*                                      */

////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalizaci�n.
#include <wchar.h>
#include <locale.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalizaci�n.
	setlocale(LC_ALL, "");

	printf("Ingresar 25 n�meros, calcular su promedio e imprimirlo\n");

	/* VARIABLES */
	int acumulador;
	int dato;
	int x;

	/* INICIALIZAR */
	dato = 0;
	acumulador = 0;

	/* INPUT */
	for (x=1;x<=25;x+=1) {
		printf("Ingrese el dato %d: ",x);
		scanf("%d",&dato);
		acumulador = acumulador+dato;
	}

	/* OUTPUT */
	printf("El promedio es %d\n",acumulador/25);
	return 0;
}

