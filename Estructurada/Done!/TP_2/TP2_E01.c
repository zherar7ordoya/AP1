
/* GERARDO TORDOYA *\
\*       FSD       */

#include<stdio.h>

/* UAI - P Estructurada */
/* TRABAJO PR�CTICO 2 */
/* Gerardo Tordoya */
/* 2020-09-09 */
/* ---------- */

int main() {
	// PLANTEO DEL EJERCICIO
	printf("Ingresar dos valores, indicar e imprimir si son iguales\n");
	
	/* Variables */
	float dos;
	float uno;

	/* Inicializaci�n */
	printf("Ingrese 1er valor\n");
	scanf("%f",&uno);
	printf("Ingrese 2do valor\n");
	scanf("%f",&dos);
	
	/* Operaciones */
	if ((uno==dos)) {
		printf("Los valores son iguales\n");
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

