
/* Gerardo Tordoya *\
\*       FSD       */

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

	// Descripción.
	printf("\n\n");
	printf("ÚLTIMO ELEMENTO DE UN VECTOR\n");
	printf("\n\n");

	// Haz lo tuyo.
	int coleccion[4] = { 10, 9, 8 };
	int tope = sizeof coleccion / sizeof coleccion[0];
	printf("Tamaño del vector: %u\n\n", tope);
	
	coleccion[tope-1] = 7;
	
	printf("Se ingresó %d en la última posición\n", coleccion[tope-1]);

	// Vete.
	getch();
	printf("\n\n");
	system("pause");
	return 0;
}


