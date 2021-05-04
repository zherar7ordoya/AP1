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

// Booleanos.
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalización.
	setlocale(LC_ALL, "");

	printf("Ingresar facturas hasta nro de factura = 0, sumar sus importes y\n");
	printf("cúales y cuantas superan los $1000. Imprimir los resultados\n");
	printf("  a)  Sobre el ejercicio anterior indicar cuántas superan\n");
	printf("      los $10000. Imprimir el resultado.\n");
	printf("  b)  Sobre el ejercicio anterior indicar cuántas están\n");
	printf("      entre $400 y $700 inclusive. Imprimir el resultado.\n");

	/* VARIABLE */
	int acumulador;
	bool bandera;
	int contador;
	int fila;
	int vector[100][2];
	int x;

	/* INICIALIZACIÓN */
	acumulador = 0;
	contador = 1;
	fila = 1;
	
	/* PROCESO */
	printf("Nro factura 0 para salir.\n");
	do {
		printf("Registro #%d: Nro factura: ",fila);
		scanf("%d",&vector[fila-1][0]);
		
		/* INPUT */
		if (vector[fila-1][0]!=0) {
			bandera = false;
			printf("Importe factura %d: ",vector[fila-1][0]);
			scanf("%d",&vector[fila-1][1]);
			fila = fila+1;
			
		/* OUTPUT  */
		} else {
			bandera = true;
			
			/* Sumar importes */
			for (x=1;x<=fila-1;x+=1) {
				acumulador = acumulador+vector[x-1][1];
			}
			printf("Total ingresado: $%d\n",acumulador);
			
			/* Cúales y cuantas superan los $1.000 */
			printf("---------------- DETALLE FACTURAS SUPERIORES A $1.000\n");
			contador = 0;
			for (x=1;x<=fila-1;x+=1) {
				if (vector[x-1][1]>1000) {
					printf("Factura %d $%d\n",vector[x-1][0],vector[x-1][1]);
					contador = contador+1;
				}
			}
			printf("-----------------------------------------------------\n");
			printf("FACTURAS SUPERIORES A $1.000: %d\n",contador);
			
			/* Cúales y cuantas superan los $10.000 */
			contador = 0;
			for (x=1;x<=fila-1;x+=1) {
				if (vector[x-1][1]>10000) {
					contador = contador+1;
				}
			}
			printf("FACTURAS SUPERIORES A $10.000: %d\n",contador);
			
			/* Cuántas están entre $400 y $700 inclusive */
			contador = 0;
			for (x=1;x<=fila-1;x+=1) {
				if (vector[x-1][1]>=400 && vector[x-1][1]<=700) {
					contador = contador+1;
				}
			}
			printf("FACTURAS ENTRE $400 Y $700: %d\n",contador);
		}
	} while (!(bandera));
	
	return 0;
}

