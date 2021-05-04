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
void introduce (int m[][2]);
void compara (int m1[][2], int m2[][2]);


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
    int m1[2][2];
    int m2[2][2];

	// HAZ LO TUYO...
	introduce(m1);
	printf ("\n");
	introduce(m1);
	printf ("\n");
	compara (m1, m2);
		
	// Goodbye.
	// getchar();
	printf ("\n");
	return 0;
}


void introduce (int m[][2]) {
	
	int i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf ("Valor [%d][%d]: ", i+1, j+1);
			scanf ("%d", &m[i][j]);
		}
	}
}



void compara (int m1[][2], int m2[][2]) {
	
	int i, j, aux;
	aux = 0;
	
	for (i = 0; i<2 && aux==0; i++) {
		for (j = 0; j<2 && aux==0; j++) {
			if ( m1[i][j] != m2[i][j] ) {
				aux = 1;
			}
		}
	}
	
	if (aux==0) {
		printf ("Iguales!\n");
	} 
	else {
		printf ("DIFIEREN...\n");
	}
}

