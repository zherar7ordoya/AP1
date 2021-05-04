//////////////////////////////////////////////////////////////////// DESCRIPCIÓN

/**
 * UAI Analista Programador
 * Programación Estructurada
 * Comisión 1-ON
 * 
 * @title EXAMEN FINAL
 * @author Gerardo Tordoya (22777420)
 * @date 2020-12-17
 */


/*
Una empresa farmacéutica comercializa 8 remedios a través de sus 5 sucursales.
Cada vez que realiza una venta tiene los siguientes datos, que finalizan con 
número de pedido = 0. *(PEDIDO SIN USO EN LOS RESULTADOS)

Realizar el diagrama de flujo y el código en lenguaje C.
 
NO TIENE SENTIDO.---------------------------------------------------------------
Lote 1
    Número de pedido
    Número de sucursal
    Número de remedio
    Cantidad 
Lote 2 
    Nro. de remedio
    Precio unitario
    Descripción

HAY UN USO CONFUSO ENTRE PEDIDO Y VENDIDO. SE CONSIDERARÁ QUE EL MODELO DE 
NEGOCIO ES SIMIL AL DE TOYOTA. ES DECIR, SE PIDE LO QUE YA SE HA VENDIDO.-------

Si la venta la realiza la sucursal 1 o 5, se le aplicara un 5 % de rebaja al 
valor total del pedido.

Se desea:
    1. Saber la cantidad recaudada por remedio por sucursal       *[LISTADO A/O]
    2. Saber qué remedio vendió menos en unidades 
    3. Saber la sucursal donde se VENDIÓ MÁS
    4. Saber el porcentUAL DE VENTAS POR sucursal sobre EL TOTAL VENDIDO
    5. Mostrar ordenados los productos según la cantidad de       *[LISTADO D/O]
 */

////////////////////////////////////////////////////////////////////// LIBRERÍAS

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

/////////////////////////////////////////////////////////////////// DEFINICIONES

/*
En primera instancia, se armará una tabla de datos que se verá así:

    +--------+----------+---------+--------+----------+-------+
    | pedido | sucursal | remedio | precio | cantidad | total |
    +--------+----------+---------+--------+----------+-------+
    |   10   |    2     |   100   |   75   |    10    |  750  |
    |   11   |    2     |   101   |   50   |    10    |  500  |
    |   12   |    3     |   102   |   25   |    10    |  250  |

A fin de trabajar de manera similar a como se hace en Excel con los filtros.

NOTA.***************************************************************************
SE REDONDEARÁN LOS CENTAVOS.
EL TRABAJO CON CURRENCY QUEDA PARA UNA ETAPA POSTERIOR.
*/

struct carga // *----------------------------------------=> Registro por remedio
{
	int pedido;
	int sucursal;
	int remedio;
	int precio;
	int cantidad;
	int total;
};

/*
struct reporte // *-------------------------------------=> Registro por sucursal
{
	int sucursal;
	int total;
	int porcentaje;
};
*/

///////////////////////////////////////////////////////////////////// PROTOTIPOS



////////////////////////////////////////////////////////////////////// PRINCIPAL

int main()
{
	struct carga cargas[40] = {0}; // *--------------------=> Variables de carga
	// struct reporte reportes[8] = {0};
	int continuar = 1, IDX = 0;

	struct carga intercambio[40] = {0};	// *-------------=> Variables de reporte
	int acumulador = 0, 
		global     = 0,
		maximo     = 0,
		remedio    = 0,
		sucursal   = 0;
	double minimo  = INFINITY;



	// *------------------------------------------=> OPERACIONES DE CARGA MANUAL
	while (continuar) { 
		for(int S = 0; S < 5; S++) // *--------------------------=> 5 sucursales
		{
			if (!continuar) break;
			printf("SUCURSAL %d\n", S + 1);
			
			for(int R = 0; R < 8; R++) // *------------------------=> 8 remedios
			{
				printf("\tREMEDIO %d ", R + 1);

				printf("\tPedido: ");
				scanf("%d", &cargas[IDX].pedido); // *--------------=> [CAMPO 1]
				
				if (cargas[IDX].pedido == 0) { // *-------------=> Detener carga
					continuar = 0;
					break;
				}
				
				cargas[IDX].sucursal = S + 1; // *------------------=> [CAMPO 2]
				cargas[IDX].remedio = R + 1; // *-------------------=> [CAMPO 3]
				
				printf("\t\t\tPrecio: ");
				scanf("%d", &cargas[IDX].precio); // *--------------=> [CAMPO 4]
				printf("\t\t\tCantidad: ");
				scanf("%d", &cargas[IDX].cantidad); // *------------=> [CAMPO 5]
				
				// *------------------------------------------------=> [CAMPO 6]
				if (cargas[IDX].sucursal == 1 || cargas[IDX].sucursal == 5)
					cargas[IDX].total = round(0.95 * cargas[IDX].precio * cargas[IDX].cantidad);
				else
					cargas[IDX].total = round(cargas[IDX].precio * cargas[IDX].cantidad);

				IDX++; // *--------------------------------------------=> Índice
			}
		}
	}




	// *--------------------------------------------=> OPERACIONES AUTOMATIZADAS
	
	for (int A = 0; A < IDX-1; A++) // *------------------------------=> Ordenar
		for (int B = 0; B < IDX-1; B++) {
			if (cargas[B].cantidad > cargas[B+1].cantidad) {
				intercambio[B] = cargas[B+1];
				cargas[B+1] = cargas[B];
				cargas[B] = intercambio[B];
			}
		}

	for (int A; A < 8; A++) // *---------------------=> Remedio que menos vendió
	{
		for (int B; B < IDX; B++)
		{
			global += cargas[B].total;
			if (cargas[B].remedio == A+1) { acumulador += cargas[B].cantidad; }
		}
		if (minimo > acumulador)
		{
			remedio = A+1;
			minimo = acumulador;
		}
	}
	printf("\n\tEl remedio %d fue el menos vendido (%d unidades).", remedio, minimo);
	
	for (int A = 0; A < 5; A++) // *------------------=> Sucursal que más vendió
	{
		for (int B = 0; B < IDX; B++)
			if (cargas[B].sucursal == A+1) { acumulador += cargas[B].total; }
		
		if (maximo < acumulador)
		{
			sucursal = A+1;
			maximo = acumulador;
		}
		
		printf("\n\tLa sucursal %d ha vendido %d %% del global.", A+1, acumulador/global*100);
	}
	printf("\n\tLa sucursal %d tiene la mayor venta.", sucursal);
	
	putchar('\n'); // *-----------------------------------------------=> THE END
	printf("\nPROGRAMA FINALIZADO\n");
	return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES



///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES



