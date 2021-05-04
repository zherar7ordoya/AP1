////////////////////////////////////////////////////////////////////////////////
//                                              UAI     Analista Programador  //
//                                              Estructurada (Comisión 1-ON)  //
//                                              TRABAJO PRÁCTICO       NRO 6  //
//                                              Tordoya, Gerardo    OCT-2020  //
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

// Específicas.
#include <math.h>

////////////////////////////////////////////////////////////////////////////////


/* PROTOTIPOS */


/* PRINCIPAL */
int main()
{
	// Internacionalización.
	setlocale(LC_ALL, "");

	// Entrada.
	system("color 0A");
	printf("\n\n\n");
	printf("\t\t\t PRÁCTICO 6 \n\n\n");
	
	////////////////////////////////////////////////////////////////////////////
	
	/*
	Ingresar datos y cargar un vector de 50 elementos, calcular 
	•  La suma de todos los elementos. 
	•  El producto de todos los elementos. 
	•  Mostrar del vector el elemento 50 al 1. 
	•  Imprimir las componentes de indice par. 
	•  Imprimir las componentes de indice impar. 
	*/
	printf("EJERCICIO 1.-------------------------------------------------\n\n");
		
	int loop;
	long catcher = 0;
	int matriz1[50];
	unsigned long int acumulador = 0;
	
	printf("Contenido del vector (índice:valor) \n");
  	for (loop = 0; loop < 50; loop++) {
    	catcher = rand() % 100 + 1;
    	matriz1[loop] = catcher;
    	printf("%d:%d ", loop, matriz1[loop]);
  	}

	for (loop = 0; loop < 50; loop++) {
    	acumulador += matriz1[loop];
  	}
	printf("\n\nLa suma de todos los elementos es %d \n", acumulador);
	
	acumulador = 1;
	for (loop = 0; loop < 10; loop++) {
    	acumulador *= matriz1[loop];
  	}
	printf("\nEl producto de los 10 primeros elementos es %d \n", acumulador);
	printf("NOTA: C no tiene un tipo de dato capaz de almacenar un producto tan "); 
	printf("grande, por eso ha sido necesario limitarlo a 10 \n \n");

	printf("Contenido invertido del vector \n");
  	for (loop = 49; loop > -1; loop--) {
    	printf("%d ", matriz1[loop]);
  	}
	
	printf("\n\nImprimir las componentes de índice par (índice:valor) \n");
	for (loop = 0; loop < 50; loop++) {
		if (loop % 2 == 0)
    		printf("%d:%d ", loop, matriz1[loop]);
  	}

	printf("\n\nImprimir las componentes de índice impar (índice:valor) \n");
	for (loop = 0; loop < 50; loop++) {
		if (loop % 2 == 1)
    		printf("%d:%d ", loop, matriz1[loop]);
  	}
	printf("\n\n\n");

	////////////////////////////////////////////////////////////////////////////	
	
	/*
	Ingresar datos y cargar un vector de 30 elementos, imprimir 
	•  Cantidad de valores positivos. 
	•  Cantidad de valores negativos. 
	•  Cantidad de ceros. 
	•  Promedio de los positivos. 
	•  Promedio general. 
	*/
	printf("EJERCICIO 1.-------------------------------------------------\n");
	printf("(Así está en el práctico, con numeración repetida).\n\n");
	
	// USANDO VARIABLES Y VECTOR DECLARADOS EN E1.
	printf("Valores generados \n");
	// No hace falta limpiar el vector por ahora.
	// memset(matriz1, 0, sizeof(matriz1));
  	for (loop = 0; loop < 30; loop++) {
    	catcher = rand() % 100 + 1 + (-49);
    	matriz1[loop] = catcher;
    	printf("%d:%d ", loop, matriz1[loop]);
  	}
  	printf("\n");
  	
  	int positivos = 0;
  	int negativos = 0;
  	int val_ceros = 0;
  	int acumulador_pos = 0;
  	int acumulador_gen = 0;

  	for (loop = 0; loop < 30; loop++) {
    	if (matriz1[loop] > 0) {
    		positivos++;
    		acumulador_pos += matriz1[loop];
		}
    	if (matriz1[loop] < 0) negativos++;
		if (matriz1[loop] == 0) val_ceros++;
		acumulador_gen += matriz1[loop];
  	}
  	printf("\t Nros positivos:\t %d \n", positivos);
  	printf("\t Nros negativos:\t %d \n", negativos);
  	printf("\t Valores de ceros:\t %d \n", val_ceros);
  	printf("\t Promedio de positivos:\t %d \n", acumulador_pos/30);
  	printf("\t Promedio general:\t %d \n", acumulador_gen/30);
	
	printf("\n\n");
	
	////////////////////////////////////////////////////////////////////////////
	
	/*
	Ingresar 25 edades, imprimir 
	•  Edad promedio. 
	•  Edades mayores a 34 años. 
	•  Edades menores a 21 años. 
	*/
	printf("EJERCICIO 2.-------------------------------------------------\n\n");
	
	// Se usan variables del E1.
	printf("Contenido del vector (índice:valor) \n");
  	for (loop = 0; loop < 25; loop++) {
    	catcher = rand() % 100 + 1;
    	matriz1[loop] = catcher;
    	printf("%d:%d ", loop, matriz1[loop]);
  	}
  	
  	int acumulador_e2 = 0;
  	int contador_mayor_34 = 0;
  	int contador_menor_21 = 0;
  	
  	for (loop = 0; loop < 25; loop++) {
    	if (matriz1[loop] > 34) contador_mayor_34++;
		if (matriz1[loop] < 21) contador_menor_21++;
		acumulador_e2 += matriz1[loop];
  	}
	printf("\n");
  	printf("\t Edad promedio:\t %d \n", acumulador_e2/25);
  	printf("\t Mayores a 34:\t %d \n", contador_mayor_34);
  	printf("\t Menores a 21:\t %d \n", contador_menor_21);
	
	printf("\n\n");
	
	////////////////////////////////////////////////////////////////////////////

	/*
	Ingresar 10 sueldos y edades de una empresa y calcular 
	•  Sueldo promedio 
	•  Sueldo promedio de los empleados que tienen entre 23 y 40 años 
	•  Edad promedio 
	•  Cantidad de empleados mayores a 30 años y sueldo menor a $ 1000. 
	•  Cantidad de empleados con edades menor a la edad promedio 
	*/
	printf("EJERCICIO 3.-------------------------------------------------\n\n");
	
	long matriz_e3[10][2];
	int edad = 0;
	long sueldo = 0;
	
	long sueldo_promedio_gral = 0;
	long sueldo_promedio_edad_entre_23_40 = 0;
	int cantidad_edad_entre_23_40 = 0;
	int edad_promedio = 0;
	int cantidad_empleados_mayor_30_y_1000 = 0;
	int cantidad_empleados_edad_menor_promedio = 0;
	
	printf("Contenido de la matriz \n");
	
  	for (loop = 0; loop < 10; loop++) {
    	edad = rand() % 50 + 18;
    	matriz_e3[loop][0] = edad;
    	sueldo = rand() % 1000 + 750;
    	matriz_e3[loop][1] = sueldo;
    	printf("\tRegisto %d) \t Edad: %d \tSueldo: $%d \n",
		loop+1, matriz_e3[loop][0], matriz_e3[loop][1]);
  	}

  	for (loop = 0; loop < 10; loop++) {
    	sueldo_promedio_gral += matriz_e3[loop][1];
    	if(matriz_e3[loop][0]<41 && matriz_e3[loop][0]>22) sueldo_promedio_edad_entre_23_40 += matriz_e3[loop][1];
    	if(matriz_e3[loop][0]<41 && matriz_e3[loop][0]>22) cantidad_edad_entre_23_40++;
    	edad_promedio += matriz_e3[loop][0];
    	if(matriz_e3[loop][0]>30 && matriz_e3[loop][1]>100) cantidad_empleados_mayor_30_y_1000++;
  	}
  	for (loop = 0; loop < 10; loop++) {
  		if (matriz_e3[loop][0]<edad_promedio/10) cantidad_empleados_edad_menor_promedio++;
  	}
  	printf("\n\n");
  	
  	printf("\tSueldo promedio: \t\t\t $%d \n", sueldo_promedio_gral/10);
  	printf("\tSueldo promedio (rango 23-40 años): \t $%d \n", sueldo_promedio_edad_entre_23_40/cantidad_edad_entre_23_40);
  	printf("\tEdad promedio: \t\t\t\t %d \n", edad_promedio/10);
  	printf("\tEmpleados edad>30 y sueldo>$1000: \t %d \n", cantidad_empleados_mayor_30_y_1000);
	printf("\tEmpleados menores a edad promedio: \t %d \n", cantidad_empleados_edad_menor_promedio);
	
	printf("\n\n");
	
	////////////////////////////////////////////////////////////////////////////

	// Salida.
	printf("\n");
	return 0;
}


/* FUNCIONES */
