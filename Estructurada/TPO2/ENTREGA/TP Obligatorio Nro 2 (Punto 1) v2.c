/**
 * UAI Analista Programador
 * Programación Estructurada
 * Comisión 1-ON
 * 
 * @brief TRABAJO PRÁCTICO OBLIGATORIO 2 (PUNTO 1)
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

struct producto
{
	int identificador;
	unsigned short precio;
};

void maximo(struct producto *, int N);
void minimo(struct producto *, int N);
void promed(struct producto *, int N);
void cienes(struct producto *, int N);
void ordena(struct producto *, int N);
int compara(int *I, int *D);

////////////////////////////////////////////////////////////////////// PRINCIPAL

int main()
{
	// IDIOMA & COLORES & TÍTLO
	setlocale(LC_ALL, "");
	system("color 06");
	printf("\nEMPRESA www.ejercicios.com.ar\n\n");

	// VARIABLES
	struct producto productos[10] = {0};
	int INFERIOR = 50, SUPERIOR = 200;
	char modo = 'S';

	// CARGA
	do
	{
		printf("\t¿Modo automático? [S/N]: ");
		modo = fgetc(stdin);
	} while (modo == 0x0A);

	if (modo == 'S' || modo == 's')
	{
		printf("\n\tCARGANDO...\n");
		srand(time(NULL));
		for (int A = 0; A < 10; A++)
		{
			productos[A].identificador = A + 1;
			productos[A].precio = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
		}
	}
	else
	{
		printf("\n\tCarga manual:\n");
		for (int A = 0; A < 10; A++)
		{
			productos[A].identificador = A + 1;
			printf("\t\tPrecio del producto %2d = ", productos[A].identificador);
			scanf("%d", &productos[A].precio);
		}
	}

	// OPERACIONES
	ordena(productos, 10);
	maximo(productos, 10);
	minimo(productos, 10);
	promed(productos, 10);
	cienes(productos, 10);

	printf("\n\n\tArtículos por precio descendente:");
	for (int A = 0; A < 10; A++)
		printf("\n\t\tProducto %2d \tPrecio: $ %d", productos[A].identificador, productos[A].precio);

	// FINAL
	putchar('\n');
	printf("\nPROGRAMA FINALIZADO\n");
	return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES

// Precio máximo y nro. de artículo al que corresponde.
void maximo(struct producto *apuntador, int N)
{
	printf("\n\tPrecio máximo:\tProducto %2d \tPrecio: $ %d \n", apuntador[0].identificador, apuntador[0].precio);
}

// Precio mínimo y nro. de artículo al que corresponde.
void minimo(struct producto *apuntador, int N)
{
	printf("\n\tPrecio mínimo:\tProducto %2d \tPrecio: $ %d \n", apuntador[9].identificador, apuntador[9].precio);
}

// Cantidad de artículos con precio superior al precio promedio.
void promed(struct producto *apuntador, int N)
{
	int acumulador = 0, contador = 0;
	for (int A = 0; A < N; A++)
	{
		acumulador += apuntador[A].precio;
	}
	for (int A = 0; A < N; A++)
	{
		if (apuntador[A].precio > acumulador / N)
			contador++;
	}
	printf("\n\tArt. c/precio sup. al promedio ($ %d):\t%d", acumulador / N, contador);
}

// Cantidad de artículos con precio superior a $100.
void cienes(struct producto *apuntador, int N)
{
	int contador = 0;
	for (int A = 0; A < N; A++)
	{
		if (apuntador[A].precio > 100)
			contador++;
	}
	printf("\n\n\tArtículos con precio superior a $ 100:\t%d", contador);
}

// Listar los artículos por precio en orden ascendente.
void ordena(struct producto *apuntador, int N)
{
	struct producto temporal;
	for (int A = 0; A < N - 1; A++)
	{
		for (int B = 0; B < (N - 1 - A); B++)
		{
			if (apuntador[B].precio < apuntador[B + 1].precio)
			{
				temporal = apuntador[B];
				apuntador[B] = apuntador[B + 1];
				apuntador[B + 1] = temporal;
			}
		}
	}
}

///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES

int compara(int *I, int *D)
{
	return (*I > *D);
}
