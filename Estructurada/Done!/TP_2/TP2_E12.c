
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
	printf("Sobre los datos del ejercicio anterior\n");
	printf("imprimir los sueldos de los empleados con más de 5 años de antigüedad\n");
	
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
	if ((categoria==1 && antiguedad>5)) {
		printf("Sueldo: %d\n",sueldo+(antiguedad*50));
	}
	
	/* Finalización */
	getchar();
	return 0;
}

