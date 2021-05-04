
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
	printf("Ingresar dos valores y realizar e imprimir el producto si el 1ro es mayor al 2do,\n");
	printf("si son iguales solo indicarlo\n");
	
	/* Variables */	
	float dos;
	float uno;

	/* Inicialización */
	printf("Ingrese 1er valor\n");
	scanf("%f",&uno);
	printf("Ingrese 2do valor\n");
	scanf("%f",&dos);
	
	/* Operaciones */
	if ((uno>dos)) {
		printf("El producto entre el 1ro y el 2do es %f\n",uno*dos);
	} else {
		if ((uno==dos)) {
			printf("Los valores son iguales\n");
		}
	}
	
	/* Finalización */
	getchar();
	return 0;
}

