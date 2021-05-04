////////////////////////////////////////////////////////////////////////////////
//                                                 UAI  ||  Analista Programador
//                                  Programación Estructurada  ||  Comisión 1-ON
//                                              Tordoya, Gerardo  ||  2020-10-01
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

// Booleanos (Mmm...)
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

// PROTOTIPOS
void ordenar (int a[]);
void imprimir (int x[]);


int main() {
    
    // Internacionalización.
    setlocale(LC_ALL, "");

	// Welcome.    
    printf("I believe whatever doesn't kill you, simply makes you...stranger.\n");
    
    // Variables.
    int v[10] = {8, 4, 6, 5, 7, 3, 2, 1, 0, 9};

	// HAZ LO TUYO...
	ordenar (v);
	imprimir (v);
		
	// Goodbye.
	getchar();
	return 0;
}


void ordenar (int a[]) {
	
	int i, j, aux;
	
	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (a[i] > a[j]) {
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}


void imprimir (int x[]) {
	
	int i;
	
	for (i = 0; i < 10; i++) {
		printf ("%d, ", x[i]);
	}
}
