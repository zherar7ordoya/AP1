/* EJERCICIO 1 */
/* Sumar 2 enteros. */

#include<stdio.h>

int main() {
	
	printf("SUMAR DOS ENTEROS \n");
	
	/* Declaración */
	int dos;
	int total;
	int uno;

	/* Inicialización */
	printf("Ingrese 1er entero: ");
	scanf("%i",&uno);
	printf("Ingrese 2do entero: ");
	scanf("%i",&dos);
	
	/* Procesamiento */
	total = uno + dos;
	
	/* Comunicación */
	printf("La suma de los dos enteros es %i\n",total);
	return 0;
}

