
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
	printf("Ingresar tres valores, sumarlos,\n");
	printf("calcular el promedio e indicar e imprimir\n");
	printf("cu�l de estos valores es mayor al promedio\n");
	
	/* Variables */
	float dos;
	float promedio;
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
	promedio = (uno+dos+tres)/3;
	if ((uno>promedio)) {
		printf("El 1er valor es mayor al promedio\n");
	}
	if ((dos>promedio)) {
		printf("El 2do valor es mayor al promedio\n");
	}
	if ((tres>promedio)) {
		printf("El 3er valor es mayor al promedio\n");
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

