/*                                      *\
UAI                   Analista Programador
Programación Estructurada    Comisión 1-ON
                         TP 4
Tordoya, Gerardo               25-sep-2020
\*                                      */

////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalización.
	setlocale(LC_ALL, "");

	printf("Ingresar  8  valores  por  teclado,  y  a  partir  de  esto\n");
	printf("sacar  el  promedio  general,  sacar  el promedio  de  los\n");
	printf("valores  pares y  el  promedio  de  los valores  impares.\n");
	printf("Luego mostrar por pantalla cuantos números superaron el valor 15.\n");

	/* VARIABLES */
	float acumulador;
	int contador;
	int vector[8];
	int x;

	/* INPUT */
	for (x=1;x<=8;x+=1) {
		printf("Valor #%i: ",x);
		scanf("%d",&vector[x-1]);
	}

	/* OUTPUT PROMEDIO GENERAL */
	acumulador = 0;
	contador = 0;
	for (x=1;x<=8;x+=1) {
		acumulador = acumulador+vector[x-1];
	}
	printf("Promedio general: %.2f\n",acumulador/8);

	/* OUTPUT PROMEDIO PARES */
	acumulador = 0;
	contador = 0;
	for (x=1;x<=8;x+=1) {
		if (vector[x-1]%2==0) {
			acumulador = acumulador+vector[x-1];
			contador = contador+1;
		}
	}
	printf("Promedio pares: %.2f\n",acumulador/contador);

	/* OUTPUT PROMEDIO IMPARES */
	acumulador = 0;
	contador = 0;
	for (x=1;x<=8;x+=1) {
		if (vector[x-1]%2!=0) {
			acumulador = acumulador+vector[x-1];
			contador = contador+1;
		}
	}
	printf("Promedio impares: %.2f\n",acumulador/contador);

	/* OUTPUT MAYORES A 15 */
	acumulador = 0;
	contador = 0;
	for (x=1;x<=8;x+=1) {
		if (vector[x-1]>15) {
			contador = contador+1;
		}
	}
	printf("Mayores a 15: %d\n",contador);
	return 0;
}

