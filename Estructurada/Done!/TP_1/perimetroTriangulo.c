/* EJERCICIO 4 */
/* Ingresar los lados de un triángulo. */
/* Calcular su perímetro. */

#include<stdio.h>

int main() {
	
	printf("CALCULAR EL PERÍMETRO DE UN TRIÁNGULO \n");
	
	/* Declarar */	
	float dos;
	float total;
	float tres;
	float uno;

	/* Inicializar */
	printf("Ingrese 1er lado: ");
	scanf("%f",&uno);
	printf("Ingrese 2do lado: ");
	scanf("%f",&dos);
	printf("Ingrese 3er lado: ");
	scanf("%f",&tres);
	
	/* Procesar */
	total = uno + dos + tres;
	
	/* Comunicar */
	printf("El perímetro es %f\n",total);
	
	return 0;
}

