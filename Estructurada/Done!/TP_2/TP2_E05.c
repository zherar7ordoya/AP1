
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
	printf("Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es\n");
	
	/* Variables */
	float dos;
	float tres;
	float uno;
	
	/* Inicialización */
	printf("Ingrese 1er valor\n");
	scanf("%f",&uno);
	printf("Ingrese 2do valor\n");
	scanf("%f",&dos);
	printf("Ingrese 3er valor\n");
	scanf("%f",&tres);
	
	/* Operaciones */
	if ((uno==dos && dos==tres)) {
		printf("Los tres lados son iguales: es equilátero\n");
	} else {
		if ((uno!=dos && dos!=tres && tres!=uno)) {
			printf("Los tres lados difieren: es escaleno\n");
		} else {
			printf("Dos lados coinciden: es isósceles\n");
		}
	}
	
	/* Finalización */
	getchar();
	return 0;
}

