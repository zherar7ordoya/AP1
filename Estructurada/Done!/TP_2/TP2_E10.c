
/* GERARDO TORDOYA *\
\*       FSD       */

#include<stdio.h>
#include<stdbool.h>

// Declaraciones adelantadas de las funciones
bool validar(int d, int m, int a);

/* UAI - P Estructurada */
/* TRABAJO PRÁCTICO 2 */
/* Gerardo Tordoya */
/* 2020-09-09 */
/* ---------- */

int main() {
	// PLANTEO DEL EJERCICIO
	printf("Ingresar tres valores correspondientes al día, mes y año de una fecha,\n");
	printf("indicar si es válida,\n");
	printf("considerar los años bisiestos\n");
	printf("\n");
	printf("\n");
	
	/* Variables */
	int ano;
	int dia;
	int mes;

	/* Inicialización */
	printf("¿Día?\n");
	scanf("%d",&dia);
	printf("¿Mes?\n");
	scanf("%d",&mes);
	printf("¿Año?\n");
	scanf("%d",&ano);
	
	/* Operaciones */
	if ((validar(dia,mes,ano))) {
		printf("Es válida\n");
	} else {
		printf("Fecha no válida\n");
	}
	
	/* Finalización */
	getchar();
	return 0;
}

bool validar(int d, int m, int a) {
	
	/* Variables */	
	int dias[12];
	bool res;

	/* Inicialización del vector */
	dias[0] = 31;
	dias[1] = 28;
	dias[2] = 31;
	dias[3] = 30;
	dias[4] = 31;
	dias[5] = 30;
	dias[6] = 31;
	dias[7] = 31;
	dias[8] = 30;
	dias[9] = 31;
	dias[10] = 30;
	dias[11] = 31;
	
	/* Bisiesto */
	if (((a%4==0 && a%100!=0) || a%400==0)) {
		dias[1] = 29;
	}
	
	/* Validación */
	res = true;
	if ((m<1 || m>12)) {
		res = false;
	}
	if ((d<0 || d>dias[m-1])) {
		res = false;
	}
	
	// VALOR DE RETORNO
	return res;
}

