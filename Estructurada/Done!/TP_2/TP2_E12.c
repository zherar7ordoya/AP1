
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
	printf("Sobre los datos del ejercicio anterior\n");
	printf("imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad\n");
	
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
	if ((categoria==1 && antiguedad>5)) {
		printf("Sueldo: %d\n",sueldo+(antiguedad*50));
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

