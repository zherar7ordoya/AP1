
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
	printf("Ingresar el valor de la hora y el tiempo trabajado por un empleado,\n");
	printf("calcular su sueldo conociendo que recibe un premio de $ 100\n");
	printf("si trabajo más de 50 hs\n");
	printf("y si trabajo más de 150 hs le dan otros $ 100 adicionales.\n");
	printf("Imprimir el sueldo\n");
	
	/* Variables */
	int horastrabajadas;
	float horavalor;
	
	/* Inicialización */
	printf("Horas trabajadas:\n");
	scanf("%i",&horastrabajadas);
	printf("Valor ($) de la hora:\n");
	scanf("%f",&horavalor);
	
	/* Operaciones */
	if ((horastrabajadas>150)) {
		printf("Sueldo: $%f\n",horastrabajadas*horavalor+200);
	} else {
		if ((horastrabajadas>50)) {
			printf("Sueldo: $%f\n",horastrabajadas*horavalor+100);
		} else {
			printf("Sueldo: $%f\n",horastrabajadas*horavalor);
		}
	}
	
	/* Finalización */
	getchar();
	return 0;
}

