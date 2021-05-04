/* EJERCICIO 2 */
/* Sumar 3 enteros */
/* Sumar 2 operandos por vez. */

#include<stdio.h>

int main() {
	
	printf("SUMAR TRES ENTEROS \n");

	/* Declarar */
	int dos;
	int subtotal;
	int total;
	int tres;
	int uno;
	
	/* Inicializar */
	printf("Ingrese 1er entero: ");
	scanf("%i", &uno);
	printf("Ingrese 2do entero: ");
	scanf("%i", &dos);
	
	/* Procesar */
	subtotal = uno + dos;
	
	/* Comunicar */
	printf("Subtotal: %i\n", subtotal);
	
	/* Cargar */
	printf("Ingrese 3er entero: ");
	scanf("%i", &tres);
	
	/* Procesar */
	total = subtotal + tres;
	
	/* Comunicar */
	printf("La suma de los tres enteros es %i\n",total);
	return 0;
}

