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
	printf("PRINT MULTIPLE VARIABLES INSIDE A STRING USING PRINTF\n");
	printf("\n\n");

	// Haz lo tuyo.
	int a, b, c;
    printf("Ingrese dos números:\n");
    scanf("%d%d", &a, &b);
    c = (a>b) ? a : b;
	printf("\nEl máximo de %d y %d es = %d\n", a, b, c);
	
	// Vete.	 
	getch();
	printf("\n\n");
	system("pause");
	return 0;
}

