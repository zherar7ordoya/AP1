
/* Gerardo Tordoya *\
\*       FSD       */

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

	// Descripci�n.
	printf("\n\n");
	printf("�LTIMO ELEMENTO DE UN VECTOR\n");
	printf("\n\n");

	// Haz lo tuyo.
	int coleccion[4] = { 10, 9, 8 };
	int tope = sizeof coleccion / sizeof coleccion[0];
	printf("Tama�o del vector: %u\n\n", tope);
	
	coleccion[tope-1] = 7;
	
	printf("Se ingres� %d en la �ltima posici�n\n", coleccion[tope-1]);

	// Vete.
	getch();
	printf("\n\n");
	system("pause");
	return 0;
}


