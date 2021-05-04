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

	printf("Ingresar 25 números, calcular su promedio e imprimirlo\n");

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

