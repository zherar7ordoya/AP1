
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
	printf("Ingresar cuatro valores,\n");
	printf("sumar el 1ro y el 2do, el 3ro y el 4to,\n");
	printf("indicar e imprimir cu�l de estas sumas es mayor\n");
	
	/* Variables */
	float cuatro;
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
	printf("Ingrese 4to valor\n");
	scanf("%f",&cuatro);
	
	/* Operaciones */
	if (((uno+dos)>(tres+cuatro))) {
		printf("El 1er caso es mayor\n");
	} else {
		if (((uno+dos)<(tres+cuatro))) {
			printf("El 2do caso es mayor\n");
		}
	}
	
	/* Finalizaci�n */
	getchar();
	return 0;
}

