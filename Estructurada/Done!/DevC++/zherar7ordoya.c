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
	printf("PRINT MULTIPLE VARIABLES INSIDE A STRING USING PRINTF\n");
	printf("\n\n");

	// Haz lo tuyo.
	int a, b, c;
    printf("Ingrese dos n�meros:\n");
    scanf("%d%d", &a, &b);
    c = (a>b) ? a : b;
	printf("\nEl m�ximo de %d y %d es = %d\n", a, b, c);
	
	// Vete.	 
	getch();
	printf("\n\n");
	system("pause");
	return 0;
}

