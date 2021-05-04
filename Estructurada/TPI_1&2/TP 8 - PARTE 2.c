/**
 * UAI Analista Programador
 * Programación Estructurada
 * Comisión 1-ON
 * 
 * @title TRABAJO PRÁCTICO 8 INTEGRACIÓN #2
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
struct venta
{
	int aeropuerto;
	int empleado;
	unsigned short precio;	
	int cantidad;
	unsigned short total;
	float iva;
	float iibb;
};
void automatica(struct venta *, int N);
void manual(struct venta *, int N);
void mostrar(struct venta *, int N);
void puntoA(struct venta *, int N);
void puntoB(struct venta *, int N);
void puntoC(struct venta *, int N);
void puntoD(struct venta *, int N);
void puntoE(struct venta *, int N);
void puntoF(struct venta *, int N);
void puntoG(struct venta *, int N);
void puntoH(struct venta *, int N);
int compara(int *, int *);
////////////////////////////////////////////////////////////////////// PRINCIPAL

/*
Una companía aérea vende boletos en 3 aeropuertos mediante 6 empleados, cada vez
que realiza una venta tiene los siguientes datos:
	número de aeropuerto
	número de empleado
	valor del pasaje
	cantidad de pasajes
los datos finalizan con número de empleado = 99.

Se desea saber:
	A. cantidad de pasajes vendidos por aeropuerto
	B. cantidad de pasajes vendidos por cada empleado
	C. monto total vendido por empleado
	D. boleto de mayor valor
	E. porcentual que representa lo vendido por cada aeropuerto en dinero sobre
		el total
	F. cantidad de ventas que excedieron los $ 1000
	G. si cada boleto ya tiene incorporado el 10,5% de iva sobre el valor del
		boleto, cuánto hay que pagarle al fisco
	H. si sobre el total hay que pagar el 3% de ingresos brutos, cuál es ese
		monto
*/

int main()
{
    setlocale(LC_ALL, "");
    system("color 06");
	// *------------------------------------------------------------=> VARIABLES
	struct venta ventas[10] = {0};
	const int N = 10;
	char modo = 'S';
	// *-----------------------------------------------------------------=> MODO
	do
	{
		printf("¿Modo automático? [S/N]: ");
		modo = fgetc(stdin);
	} while (modo == 0x0A);
	// *----------------------------------------------------------------=> CARGA
	if (modo == 'S' || modo == 's')
	{
		printf("\nCarga automática. Espere...\n");
		automatica(ventas, N);
	}
	else
	{
		printf("\nCarga manual. Ingrese valores:");
		manual(ventas, N);
	}
	// *---------------------------------------------------------=> VERIFICACIÓN
	printf("\nCarga efectuada:\n");
	mostrar(ventas, 10); // *--------------------=> A esta altura, N se corrompe
	// *----------------------------------------------------------=> OPERACIONES
	puntoA(ventas, 10);
	puntoB(ventas, 10);
	puntoC(ventas, 10);
	puntoD(ventas, 10);
	puntoE(ventas, 10);
	puntoF(ventas, 10);
	puntoG(ventas, 10);
	puntoH(ventas, 10);
	// *--------------------------------------------------------------=> THE END
	return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES

void automatica(struct venta *apuntador, int N)
{
	int INFERIOR = 0, SUPERIOR = 0;
	srand(time(NULL));
	for (int A = 0; A < N; A++)
	{
		INFERIOR = 1, SUPERIOR = 3;
		apuntador[A].aeropuerto = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
		
		INFERIOR = 21, SUPERIOR = 26;
		apuntador[A].empleado = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
		
		INFERIOR = 500, SUPERIOR = 2000;
		apuntador[A].precio = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;

		INFERIOR = 1, SUPERIOR = 4;
		apuntador[A].cantidad = (rand() % (SUPERIOR - INFERIOR + 1)) + INFERIOR;
		
		apuntador[A].total = apuntador[A].precio * apuntador[A].cantidad;
		apuntador[A].iva = apuntador[A].total - apuntador[A].total / 1.105;
		apuntador[A].iibb = apuntador[A].total * 0.03;
	}
}

void manual(struct venta *apuntador, int N)
{
	int A = -1;
	do
	{
		A++;
		
		printf("\n\nAeropuerto [1-3]:\t");
		scanf("%d", &apuntador[A].aeropuerto);
		
		printf("Empleado [21-26]:\t");
		scanf("%d", &apuntador[A].empleado);

		printf("Precio del pasaje:\t");
		scanf("%d", &apuntador[A].precio);
		
		printf("Cantidad de pasajes:\t");
		scanf("%d", &apuntador[A].cantidad);

		apuntador[A].total = apuntador[A].precio * apuntador[A].cantidad;
		printf("Total de venta:\t\t%d", apuntador[A].total);
		
		apuntador[A].iva = apuntador[A].total - apuntador[A].total / 1.105;
		printf("\nTotal de IVA:\t\t%3.2f", apuntador[A].iva);
		
		apuntador[A].iibb = apuntador[A].total * 0.03;
		printf("\nTotal de IIBB:\t\t%3.2f", apuntador[A].iibb);
	} while (apuntador[A].empleado != 99);
	putchar('\n');
}

void mostrar(struct venta *apuntador, int N)
{
	printf("\tAEROP \tEMPLEA \tPRECIO \tCANT. \tTOTAL \tI.V.A. \t IIBB\n");
	for (int A = 0; A < N; A++)
	{
		printf("\t%3d \t%4d \t%5d \t%3d \t%5d \t%6.2f \t%6.2f",
			apuntador[A].aeropuerto,
			apuntador[A].empleado,
			apuntador[A].precio,
			apuntador[A].cantidad,
			apuntador[A].total,
			apuntador[A].iva,
			apuntador[A].iibb);
			putchar('\n');
	}
}

// A. cantidad de pasajes vendidos por aeropuerto
void puntoA(struct venta *apuntador, int N)
{
	int uno = 0, dos = 0, tres = 0;
	for (int A = 0; A < N; A++)
	{
		switch (apuntador[A].aeropuerto)
		{
			case 1:
				uno++;
				break;
			case 2:
				dos++;
				break;
			case 3:
				tres++;
				break;
		}
	}
	printf("\nCantidad de pasajes vendidos por aeropuerto:\n");
	printf("\tAEROP \t CANT.\n");
	printf("\t %2d \t %3d \n", 1, uno);
	printf("\t %2d \t %3d \n", 2, dos);
	printf("\t %2d \t %3d \n", 3, tres);
}

// B. cantidad de pasajes vendidos por cada empleado
void puntoB(struct venta *apuntador, int N)
{
	int e21 = 0, e22 = 0, e23 = 0, e24 = 0, e25 = 0, e26 = 0;
	for (int A = 0; A < N; A++)
	{
		switch (apuntador[A].empleado)
		{
			case 21:
				e21++;
				break;
			case 22:
				e22++;
				break;
			case 23:
				e23++;
				break;
			case 24:
				e24++;
				break;
			case 25:
				e25++;
				break;
			case 26:
				e26++;
				break;
		}
	}
	printf("\nCantidad de pasajes vendidos por empleado:\n");
	printf("\tEMPL \t CANT.\n");
	printf("\t %2d \t %3d \n", 21, e21);
	printf("\t %2d \t %3d \n", 22, e22);
	printf("\t %2d \t %3d \n", 23, e23);
	printf("\t %2d \t %3d \n", 24, e24);
	printf("\t %2d \t %3d \n", 25, e25);
	printf("\t %2d \t %3d \n", 26, e26);
}

// C. monto total vendido por empleado
void puntoC(struct venta *apuntador, int N)
{
	int e21 = 0, e22 = 0, e23 = 0, e24 = 0, e25 = 0, e26 = 0;
	for (int A = 0; A < N; A++)
	{
		switch (apuntador[A].empleado)
		{
			case 21:
				e21 += apuntador[A].total;
				break;
			case 22:
				e22 += apuntador[A].total;
				break;
			case 23:
				e23 += apuntador[A].total;
				break;
			case 24:
				e24 += apuntador[A].total;
				break;
			case 25:
				e25 += apuntador[A].total;
				break;
			case 26:
				e26 += apuntador[A].total;
				break;
		}
	}
	printf("\nTotal vendido por empleado:\n");
	printf("\tEMPL \t  TOTAL\n");
	printf("\t %2d \t $%5d \n", 21, e21);
	printf("\t %2d \t $%5d \n", 22, e22);
	printf("\t %2d \t $%5d \n", 23, e23);
	printf("\t %2d \t $%5d \n", 24, e24);
	printf("\t %2d \t $%5d \n", 25, e25);
	printf("\t %2d \t $%5d \n", 26, e26);
}

// D. boleto de mayor valor
void puntoD(struct venta *apuntador, int N)
{
	int maximo = 0;
	for (int A = 0; A < N; A++)
		if (apuntador[A].precio > maximo)
			maximo = apuntador[A].precio;
	printf("\nBoleto de mayor precio vendido: $ %d\n", maximo);
}

// E. porcentual que representa lo vendido por cada aeropuerto sobre el total
void puntoE(struct venta *apuntador, int N)
{
	int a1 = 0, a2 = 0, a3 = 0, total = 0;
	for (int A = 0; A < N; A++)
	{
		switch (apuntador[A].aeropuerto)
		{
			case 1:
				a1 += apuntador[A].total;
				break;
			case 2:
				a2 += apuntador[A].total;
				break;
			case 3:
				a3 += apuntador[A].total;
				break;
		}
		total += apuntador[A].total;
	}
	// (float)anuales[iter].sueldo / total * 100;
	printf("\nPorcentual del total vendido por aeropuerto:\n");
	printf("\tAEROP \t  PORC.\n");
	printf("\t %2d \t %3.2f %% \n", 1, (float)a1 / total * 100);
	printf("\t %2d \t %3.2f %% \n", 2, (float)a2 / total * 100);
	printf("\t %2d \t %3.2f %% \n", 3, (float)a3 / total * 100);
}

// F. cantidad de ventas que excedieron los $ 1000
void puntoF(struct venta *apuntador, int N)
{
	int contador = 0;
	for (int A = 0; A < N; A++)
		if (apuntador[A].total > 1000)
			contador++;
	printf("\nVentas que excedieron los $ 1000: %d\n", contador);
}

// 	G. cada boleto ya tiene incorporado el 10,5% de iva: TOTAL IVA.
void puntoG(struct venta *apuntador, int N)
{
	float total = 0;
	for (int A = 0; A < N; A++)
		total += apuntador[A].iva;
	printf("\nTotal IVA a pagar: $ %5.2f\n", total);
}

// H. si sobre el total hay que pagar el 3% de ingresos brutos: TOTAL IIBB
void puntoH(struct venta *apuntador, int N)
{
	float total = 0;
	for (int A = 0; A < N; A++)
		total += apuntador[A].iibb;
	printf("\nTotal IIBB a pagar: $ %5.2f\n", total);
}
///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES
int compara(int *I, int *D)
{
	return (*I > *D);
}

