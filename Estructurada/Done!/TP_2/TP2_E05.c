
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
	printf("Ingresar los tres lados de un tri�ngulo e indicar que tipo de tri�ngulo es\n");
	
	/* Variables */
	float dos;
	float tres;
	float uno;
	
	/* Inicializaci�n */
	printf("Ingrese 1er valor\n");
	scanf("%f",&uno);
	printf("Ingrese 2do valor\n");
	scanf("%f",&dos);
	printf("Ingrese 3er valor\n");
	scanf("%f",&tres);
	
	/* Operaciones */
	if ((uno==dos && dos==tres)) {
		printf("Los tres lados son iguales: es equil�tero\n");
	} else {
		if ((uno!=dos && dos!=tres && tres!=uno)) {
			printf("Los tres lados difieren: es escaleno\n");
		} else {
			printf("Dos lados coinciden: es is�sceles\n");
		}
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

