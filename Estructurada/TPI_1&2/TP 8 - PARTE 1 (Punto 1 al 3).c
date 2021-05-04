/**
 * UAI Analista Programador
 * Programación Estructurada
 * Comisión 1-ON
 * 
 * @title TRABAJO PRÁCTICO 8 INTEGRACIÓN #1
 * @author Gerardo Tordoya
 * @date Nov-2020
 */

////////////////////////////////////////////////////////////////////// LIBRERÍAS
#include <stdio.h> // *-----------------------------------------------=> Básicas
#include <stdlib.h>
#include <wchar.h> // *----------------------------------=> Internacionalización
#include <locale.h>
#include <math.h> // *--------------------------------------------=> Específicas
#include <time.h>
#include <string.h>
///////////////////////////////////////////////////////////////////// PROTOTIPOS
#define VERDADERO 1
#define FALSO 0
#define NO_ENCONTRADO -1
void burbuja_ingenuo(int vector[], int ciclos);
void burbuja_mejorado(int vector[], int ciclos);
int busqueda_lineal(const int a[], int x, int n);
int busqueda_binaria(const int a[], int x, int lim_inf, int lim_sup);
void burbuja_invertido(int a[], int n);
int compara (const void * A, const void * B);
////////////////////////////////////////////////////////////////////// PRINCIPAL

int main()
{
    setlocale(LC_ALL, "");
    system("color 06");
    // *----------------------------------------------------=> VARIABLES COMUNES
    int loop = 0;
    int temp = 0;
    int acumulador = 0;
    int contador = 0;
    // *----------------------------------------------------------=> EJERCICIO 1
    // Ingrese 20 valores en un vector e imprimalo ordenado utilizando el
	// algoritmo bubblesort u ordenamiento por burbujeo.
	
    printf("EJERCICIO 1.\n\n");

    int vector_e1[20];

    printf("Contenido del vector: \n");
    for (loop = 0; loop < 20; loop++)
    {
        temp = rand() % 150;
        vector_e1[loop] = temp;
        printf("%2d) %3d \t", loop, vector_e1[loop]);
    }

    burbuja_mejorado(vector_e1, 20);
    printf("\n\nVector ordenado: \n");
    for (loop = 0; loop < 20; loop++)
    {
        printf("%2d) %3d \t", loop, vector_e1[loop]);
    }

    printf("\n\n\n");

    // *----------------------------------------------------------=> EJERCICIO 2
    // Modifique el programa anterior, para que permita elegir que algoritmo
	// utilizar por medio de un menú, puede ser Bubblesort o Quicksort. Deben 
	// utilizarse funciones para implementar los algoritmos. 
	
    printf("EJERCICIO 2.\n\n");

    int valores[20];
    char opcion = 'S';

    printf("Contenido del vector: \n");
    for (loop = 0; loop < 20; loop++)
    {
        valores[loop] = rand() % 150;
        printf("%2d) %3d \t", loop, valores[loop]);
    }
	
	printf("\n\n");
	do
	{
		printf("¿Usar QuickSort? (por defecto, se usará BubbleSort) [S/N]: ");
		opcion = fgetc(stdin);
	} while (opcion == 0x0A);
	
	if (opcion == 'S' || opcion == 's')
	{
		printf("\nQuickSort opción elegida");
		qsort(valores, 20, sizeof(int), compara);
	}
	else {
		printf("\nBubbleSort opción elegida");
		burbuja_mejorado(vector_e1, 20);
	}
		
    printf("\n\nVector ordenado: \n");
    for (loop = 0; loop < 20; loop++)
    {
        printf("%2d) %3d \t", loop, valores[loop]);
    }

    printf("\n\n\n");

    // *----------------------------------------------------------=> EJERCICIO 3
    // Cree un programa para ingresar 10 números en un vector y luego que
	// permita introducir un número para realizar una búsqueda. Permita que el 
	// operador del programa elija que tipo de algoritmo quiere utilizar por 
	// medio de un menú (debe ser búsqueda binaria o secuencial). 
	
    printf("EJERCICIO 3.\n\n");

    int vector_e2[10];
    int nro, metodo, respuesta;

    printf("Contenido del vector: \n");
    for (loop = 0; loop < 10; loop++)
    {
        temp = rand() % 100;
        vector_e2[loop] = temp;
        printf("%2d) %3d \t", loop, vector_e2[loop]);
    }
    printf("\n");

    do
    {
        printf("\n\tNúmero a buscar:\t\t\t");
        scanf("%d", &nro);
        printf("\t0 para lineal || 1 para binaria:\t");
        scanf("%d", &metodo);
    } while (metodo != 0 && metodo != 1);

    if (metodo == 0)
        respuesta = busqueda_lineal(vector_e2, nro, 10);
    else
    {
        burbuja_ingenuo(vector_e2, 10);
        printf("\nOrdenando vector... \n");
        for (loop = 0; loop < 10; loop++)
            printf("%2d) %3d \t", loop, vector_e2[loop]);
        respuesta = busqueda_binaria(vector_e2, nro, 0, 9);
        printf("\n");
    }

    printf("\n\tEl número buscado está en el índice\t%d\n\n\n", respuesta);

    // *---------------------------------------------------------------=> SALIDA
    printf("\n");
    return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES
int compara (const void * A, const void * B) {
   return ( *(int*)A - *(int*)B );
}

void burbuja_ingenuo(int a[], int n)
{
    int veces, i, aux;
    for (veces = 1; veces < n; veces++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }
}

void burbuja_mejorado(int a[], int n)
{
    int veces, i, aux, bandera = VERDADERO;
    for (veces = 1; veces < n && bandera; veces++)
    {
        bandera = FALSO;
        for (i = 0; i < n - veces; i++)
        {
            if (a[i] > a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                bandera = VERDADERO;
            }
        }
    }
}

int busqueda_lineal(const int a[], int x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            return i;
    }
    return NO_ENCONTRADO;
}

int busqueda_binaria(const int a[], int x, int lim_inf, int lim_sup)
{
    int medio;
    while (lim_inf <= lim_sup)
    {
        medio = (lim_inf + lim_sup) / 2;
        if (x == a[medio])
        {
            return medio;
        }
        else if (x < a[medio])
        {
            lim_sup = medio - 1;
        }
        else
        {
            lim_inf = medio + 1;
        }
    }
    return NO_ENCONTRADO;
}

void burbuja_invertido(int a[], int n)
{
    int veces, i, aux, bandera = VERDADERO;
    for (veces = 1; veces < n && bandera; veces++)
    {
        bandera = FALSO;
        for (i = 0; i < n - veces; i++)
        {
            if (a[i] < a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                bandera = VERDADERO;
            }
        }
    }
}
///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES

