/*                                      *\
UAI                   Analista Programador
Programaci�n Estructurada    Comisi�n 1-ON
                         TP 3
Tordoya, Gerardo               25-sep-2020
\*                                      */

////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalizaci�n.
#include <wchar.h>
#include <locale.h>

////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {

	// Internacionalizaci�n.
	setlocale(LC_ALL, "");

	printf("Ingresar 10 valores, indicar e imprimir cu�ntos son positivos,\n");
	printf("cu�ntos negativos y cu�ntos ceros\n");
	
	/* VARIABLES */
	int ceros;
	int dato;
	int negativos;
	int positivos;
	int x;

	/* INICIALIZAR */
	positivos = 0;
	negativos = 0;
	ceros = 0;
	dato = 0;
	
	/* INPUT */
	for (x=1;x<=10;x+=1) {
		printf("Valor %d: ",x);
		scanf("%i",&dato);
		if (dato>0) {
			positivos = positivos+1;
		}
		if (dato<0) {
			negativos = negativos+1;
		}
		if (dato==0) {
			ceros = ceros+1;
		}
	}
	
	/* OUTPUT */
	printf("Positivos: %d\n",positivos);
	printf("Negativos: %d\n",negativos);
	printf("Ceros: %d\n",ceros);
	return 0;
}

