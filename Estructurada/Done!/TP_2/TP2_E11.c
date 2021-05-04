
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
	printf("Ingresar el sueldo, categoría y antigüedad de un empleado,\n");
	printf("calcular el sueldo final de cada uno de ellos,\n");
	printf("si el empleado es de la categoría 1\n");
	printf("se le adicionara $50 por cada año de antigüedad.\n");
	printf("\n");
	
	/* Variables */	
	int antiguedad;
	int categoria;
	int sueldo;
	
	/* Inicialización */
	printf("Sueldo\n");
	scanf("%d",&sueldo);
	printf("Categoría\n");
	scanf("%d",&categoria);
	printf("Antigüedad\n");
	scanf("%d",&antiguedad);
	
	/* Operaciones */
	if ((categoria==1)) {
		printf("Sueldo: %d\n",sueldo+(antiguedad*50));
	} else {
		printf("Sueldo: %d\n",sueldo);
	}

	/* Finalización */
	getchar();
	return 0;
}

