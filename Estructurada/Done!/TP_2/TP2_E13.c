
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
	printf("Ingresar las horas trabajadas por un empleado y su categor�a,\n");
	printf("calcular su sueldo sabiendo que\n");
	printf("los empleados de la categor�a 1 cobran $50,\n");
	printf("la 2 cobra $ 70\n");
	printf("y la 3 cobra $ 80.\n");
	
	/* Variables */
	int categoria;
	int horas;

	/* Inicializaci�n */
	printf("Horas trabajadas\n");
	scanf("%i",&horas);
	printf("Categor�a\n");
	scanf("%i",&categoria);
	
	/* Operaciones */
	switch (categoria) {
	case 1:
		printf("Sueldo: %d\n",horas*50);
		break;
	case 2:
		printf("Sueldo: %d\n",horas*70);
		break;
	case 3:
		printf("Sueldo: %d\n",horas*80);
		break;
	default:
		printf("Dato no computable\n");
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

