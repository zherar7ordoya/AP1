////////////////////////////////////////////////////////////////////////////////
//                                                 UAI  ||  Analista Programador
//                                  Programaci�n Estructurada  ||  Comisi�n 1-ON
//                                              Tordoya, Gerardo  ||  2020-10-01
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalizaci�n.
#include <wchar.h>
#include <locale.h>

// Booleanos (Mmm...)
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////

// PROTOTIPOS
void funcion (int *vec);
void leer (int *vec);


int main() {
    
    // Internacionalizaci�n.
    setlocale(LC_ALL, "");

	// Welcome.
	system("color 17");
	printf ("\n");
    printf("I believe whatever doesn't kill you, simply makes you...stranger.");
    printf ("\n");
    printf ("\n");
    
    // Variables.
    int vec[3];

	// HAZ LO TUYO...
	funcion (vec);
	printf ("\n");
	leer (vec);
		
	// Goodbye.
	// getchar();
	printf ("\n");
	return 0;
}


void funcion (int *vec) {
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf ("Introduce un valor para la posici�n %i: ", i + 1);
		scanf ("%i", vec + i);
	}
}



void leer (int *vec) {
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf ("%i ", (vec + i) );
	}
}

