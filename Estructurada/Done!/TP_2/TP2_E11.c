
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
	printf("Ingresar el sueldo, categor�a y antig�edad de un empleado,\n");
	printf("calcular el sueldo final de cada uno de ellos,\n");
	printf("si el empleado es de la categor�a 1\n");
	printf("se le adicionara $50 por cada a�o de antig�edad.\n");
	printf("\n");
	
	/* Variables */	
	int antiguedad;
	int categoria;
	int sueldo;
	
	/* Inicializaci�n */
	printf("Sueldo\n");
	scanf("%d",&sueldo);
	printf("Categor�a\n");
	scanf("%d",&categoria);
	printf("Antig�edad\n");
	scanf("%d",&antiguedad);
	
	/* Operaciones */
	if ((categoria==1)) {
		printf("Sueldo: %d\n",sueldo+(antiguedad*50));
	} else {
		printf("Sueldo: %d\n",sueldo);
	}

	/* Finalizaci�n */
	getchar();
	return 0;
}

