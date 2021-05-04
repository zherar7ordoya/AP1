
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
	printf("Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor\n");
	
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
		printf("La resta del 1ro menos el 2do es %f\n",(uno-dos));
	} else {
		if ((uno<dos)) {
			printf("La resta del 2do menos el 1ro es %f\n",(dos-uno));
		}
	}
	
	/* Finalización */
	getchar();
	return 0;
}

