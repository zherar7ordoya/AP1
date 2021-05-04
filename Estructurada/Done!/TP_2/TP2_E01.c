
/* GERARDO TORDOYA *\
\*       FSD       */

#include<stdio.h>

/* UAI - P Estructurada */
/* TRABAJO PRÁCTICO 2 */
/* Gerardo Tordoya */
/* 2020-09-09 */
/* ---------- */

int main() {
	// PLANTEO DEL EJERCICIO
	printf("Ingresar dos valores, indicar e imprimir si son iguales\n");
	
	/* Variables */
	float dos;
	float uno;

	/* Inicialización */
	printf("Ingrese 1er valor\n");
	scanf("%f",&uno);
	printf("Ingrese 2do valor\n");
	scanf("%f",&dos);
	
	/* Operaciones */
	if ((uno==dos)) {
		printf("Los valores son iguales\n");
	}
	
	/* Finalización */
	getchar();
	return 0;
}

