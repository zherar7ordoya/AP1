/* EJERCICIO 3 */
/* Sumar 3 valores. */
/* Puede sumarlos al mismo tiempo. */

#include<stdio.h>

int main() {

	printf("SUMAR TRES VALORES \n");

	/* Declarar */	
	float dos;
	float total;
	float tres;
	float uno;

	/* Inicializar */
	printf("Ingrese 1er valor: ");
	scanf("%f",&uno);
	printf("Ingrese 2do valor: ");
	scanf("%f",&dos);
	printf("Ingrese 3er valor: ");
	scanf("%f",&tres);
	
	/* Procesar */
	total = uno + dos + tres;
	
	/* Comunicar */
	printf("La suma de los tres valores es %f\n",total);
	return 0;
}

