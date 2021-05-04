////////////////////////////////////////////////////////////////////////////////
//                                              UAI     Analista Programador  //
//                                              Estructurada (Comisión 1-ON)  //
//                                              Tordoya, Gerardo  2020-10-01  //
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

////////////////////////////////////////////////////////////////////////////////

// PROTOTIPOS
void introduce (int matriz[][5]);
void leer (int matriz[][5]);


int main() {
    
    // Internacionalización.
    setlocale(LC_ALL, "");

	// Welcome.
	system("color 0A");
	printf ("\n");
    printf("I believe whatever doesn't kill you, simply makes you...stranger.");
    printf ("\n");
    printf ("\n");
    
    // Variables.
    int matriz[5][5];

	// HAZ LO TUYO...
	introduce(matriz);
	printf ("\n");
	leer (matriz);
		
	// Goodbye.
	// getchar();
	printf ("\n");
	return 0;
}


void introduce (int matriz[][5]) {
	
	int i, j;
	
	srand(time(NULL));
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
}



void leer (int matriz[][5]) {
	
	int i, j;
	
	for (i = 0; i < 5; i++) {
		printf("          ");
		for (j = 0; j < 5; j++) {
			printf ("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

