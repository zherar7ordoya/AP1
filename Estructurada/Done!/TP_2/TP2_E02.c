
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
	printf("Ingresar un valor indicar e imprimir si es positivo, negativo o cero\n");
	
	/* Variables */
	float cifra;
		
	/* Inicialización */
	printf("Ingrese el valor\n");
	scanf("%f",&cifra);
	
	/* Operaciones */
	if ((cifra>0)) {
		printf("El valor es mayor que cero\n");
	} else {
		if ((cifra<0)) {
			printf("El valor es menor que cero\n");
		} else {
			printf("El valor es cero\n");
		}
	}
	
	/* Finalización */
	getchar();
	return 0;
}

