/**
 * UAI
 * Analista Programador
 * Programación Estructurada
 * Comisión 1-ON
 * 
 * @brief TRABAJO PRÁCTICO OBLIGATORIO 2 (PUNTO 3)
 * @author Gerardo Tordoya
 * @date Nov-2020
 */

////////////////////////////////////////////////////////////////////// LIBRERÍAS

#include <stdio.h> // Básicas.
#include <stdlib.h>
#include <wchar.h> // Internacionalización.
#include <locale.h>
#include <math.h> // Específicas.
#include <time.h>
#include <string.h>

///////////////////////////////////////////////////////////////////// PROTOTIPOS

void carga3x3(int matriz[][3]);
void carga4x4(int matriz[][4]);
void imprime3x3(int uno[][3], int dos[][3], int resultado[][3], char *operacion);
void imprime4x4(int original[][4], int transpuesta[][4]);
void suma(int a[][3], int b[][3], int c[][3]);
void multiplica(int uno[][3], int dos[][3], int resultado[][3]);
void transpone(int original[][4], int transpuesta[][4]);

////////////////////////////////////////////////////////////////////// PRINCIPAL

int main()
{
	setlocale(LC_ALL, "");						// Español.
	system("color 06");							// Colores.
	printf("\nOPERACIONES CON MATRICES\n \n");	// Presentación.

	// VARIABLES
	int INFERIOR = 0,
		SUPERIOR = 9,
		uno[3][3]			= {0},
		dos[3][3]			= {0},
		resultado[3][3]		= {0},
		original[4][4] 		= {0},
		transpuesta[4][4]	= {0};
	char modo = 'S', *operacion;
	
	// CARGA
	do
	{
		printf("\t¿Modo automático? [S/N]: ");
		modo = fgetc(stdin);
	} while (modo == 0x0A);
	
	if (modo == 'S' || modo == 's')
	{
		srand(time(NULL));
	
		for (int A = 0; A < 3; A++)
			for (int B = 0; B < 3; B++)
			{
				uno[A][B] = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
				dos[A][B] = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
			}
		
		for (int A = 0; A < 4; A++)
			for (int B = 0; B < 4; B++)
				original[A][B] = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
	}
	else
	{
		printf("\n\tCarga de la primera matriz (3x3) para operaciones de suma y multiplicación.\n");
		carga3x3(uno);
		printf("\n\tCarga de la segunda matriz (3x3) para operaciones de suma y multiplicación.\n");
		carga3x3(dos);
		printf("\n\tCarga de la tercera matriz (4x4) para operaciones de transposición.\n");
		carga4x4(original);
	}
	
	// OPERACIONES
	suma(uno, dos, resultado);
	imprime3x3(uno, dos, resultado, operacion = "+");
	putchar('\n');
	
	memset(resultado, 0, sizeof resultado);	// Limpiar el vector.
	
	putchar('\n');
	multiplica(uno, dos, resultado);
	imprime3x3(uno, dos, resultado, operacion = "*");
	putchar('\n');
	
	putchar('\n');
	transpone(original, transpuesta);
	imprime4x4(original, transpuesta);
	putchar('\n');
		
	// FINAL
	printf("\nPROGRAMA FINALIZADO\n");
	return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES

void transpone(int original[][4], int transpuesta[][4])
{
	for (int A = 0; A < 4; A++)
		for (int B = 0; B < 4; B++)
			transpuesta[A][B] = original[B][A];
}


void multiplica(int uno[][3], int dos[][3], int resultado[][3])
{
	for (int A = 0; A < 3; ++A)
		for (int B = 0; B < 3; ++B)
			for (int C = 0; C < 3; ++C)
				resultado[A][B] += uno[A][C] * dos[C][B];
}


void suma(int uno[][3], int dos[][3], int resultado[][3])
{
	for (int A = 0; A < 3; A++)
		for (int B = 0; B < 3; B++)
			resultado[A][B] = uno[A][B] + dos[A][B];
}

void imprime4x4(int original[][4], int transpuesta[][4])
{
	for (int A = 0; A < 4; A++)
	{
		putchar('\n');

		putchar('\t');
		for (int B = 0; B < 4; B++)
			printf("%2d ", original[A][B]);

		putchar('\t');
		if (A == 1)
			printf(" T");
		if (A == 2)
			printf(" =");
		putchar('\t');

		for (int C = 0; C < 4; C++)
			printf("%2d ", transpuesta[A][C]);
	}
}

void imprime3x3(int uno[][3], int dos[][3], int resultado[][3], char *operacion)
{
	for (int A = 0; A < 3; A++)
	{
		putchar('\n');

		putchar('\t');
		for (int B = 0; B < 3; B++)
			printf("%2d ", uno[A][B]);

		putchar('\t');
		if (A == 1)
			printf(operacion);
		putchar('\t');

		for (int C = 0; C < 3; C++)
			printf("%2d ", dos[A][C]);

		putchar('\t');
		if (A == 1)
			printf("=");
		putchar('\t');

		for (int D = 0; D < 3; D++)
			printf("%3d ", resultado[A][D]);
	}
}

void carga4x4(int matriz[][4])
{
	for (int A = 0; A < 4; A++)
	{
		printf("\tFila[%d]\n", A + 1);
		for (int B = 0; B < 4; B++)
		{
			printf("\t\tColumna[%d] = ", B + 1);
			scanf("%d", &matriz[A][B]);
		}
	}
}

void carga3x3(int matriz[][3])
{
	for (int A = 0; A < 3; A++)
	{
		printf("\tFila[%d]\n", A + 1);
		for (int B = 0; B < 3; B++)
		{
			printf("\t\tColumna[%d] = ", B + 1);
			scanf("%d", &matriz[A][B]);
		}
	}
}

///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES

