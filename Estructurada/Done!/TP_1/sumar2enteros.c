/* EJERCICIO 1 */
/* Sumar 2 enteros. */

#include<stdio.h>

int main() {
	
	printf("SUMAR DOS ENTEROS \n");
	
	/* Declaraci�n */
	int dos;
	int total;
	int uno;

	/* Inicializaci�n */
	printf("Ingrese 1er entero: ");
	scanf("%i",&uno);
	printf("Ingrese 2do entero: ");
	scanf("%i",&dos);
	
	/* Procesamiento */
	total = uno + dos;
	
	/* Comunicaci�n */
	printf("La suma de los dos enteros es %i\n",total);
	return 0;
}

