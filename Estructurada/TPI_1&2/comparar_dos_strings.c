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

//Cadenas de texto.
#include <string.h>

////////////////////////////////////////////////////////////////////////////////

// PROTOTIPOS




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
    char c1[5];
    char c2[5];

	// HAZ LO TUYO...
	printf ("Introduce la primera frase: ");
	fgets(c1, 5, stdin);
	printf ("\n");
	
	fflush(stdin);
	
	printf ("Introduce la segunda frase: ");
	fgets(c2, 5, stdin);
	printf ("\n");
		
	if(strcmp(c1, c2) == 0) {
		printf("Iguales!");
	} else {
		printf("DESIGUALES...");
	}
	
	// Goodbye.
	// getchar();
	printf ("\n");
	return 0;
}

