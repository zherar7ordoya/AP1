/*                                      *\
UAI                   Analista Programador
Programación Estructurada    Comisión 1-ON
                         TP 4
Tordoya, Gerardo               25-sep-2020
\*                                      */

////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

// Booleanos.
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalización.
	setlocale(LC_ALL, "");

	printf("Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados \n");
	
	/* VARIABLE */
	int acumulador;
	int bandera;
	int contador;
	int dato;

	/* INICIALIZACIÓN */
	// bandera, originalmente, era booleano; pero interfiere con el contador.
	acumulador = 0;
	contador = 0;
	dato = 0;
	bandera = 0;
	
	/* PROCESO */
	do {
		printf("¿Ingresar sueldo? (1 para continuar || 0 para terminar): ");
		scanf("%d",&bandera);
		
		/* INPUT */
		if (bandera) {
			contador++;
			printf("Sueldo %d: ", contador);
			scanf("%d", &dato);
			acumulador = acumulador + dato;
			
		/* OUTPUT  */
		} else {
			//if (contador>0) {
			printf("Total: $%d\n", acumulador);
			printf("Promedio: $%d\n", acumulador / contador);
			//}
		}
		
	} while (!(!bandera));
	
	return 0;
}

