////////////////////////////////////////////////////////////////////////////////
//                                              UAI     Analista Programador  //
//                                              Estructurada (Comisión 1-ON)  //
//                                              TRABAJO PRÁCTICO       NRO 5  //
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
	printf("\n\n");
	printf("\t\t PRÁCTICO 5 \n");
	printf("\t\t ---------- \n\n");
	printf("\n\n");
	
	
	// Variables generales.
	int loop = 0;
	
	
	// Ejercicio 1
	printf("1) Vector de enteros de 5 posiciones (inicia: 10, 100, 94, 84, 11).\n\n");
	int array1[5] = {10, 100, 94, 84, 11};
	
	printf("\t");
	for(loop = 0; loop < 5; loop++)
    	printf("%d ", array1[loop]);
    	
	printf("\n\n");
	
	// Ejercicio 2
	printf("2) Vector de 10 posiciones. Ingrese valores por pantalla. Muéstrelo de manera inversa.\n\n");
	int array2[10];
	printf("Valor + SPACE:\t");
	
	scanf("%d %d %d %d %d %d %d %d %d %d",
	&array2[0], &array2[1], &array2[2], &array2[3], &array2[4],
	&array2[5], &array2[6], &array2[7], &array2[8], &array2[9]);
	
	printf("\t\t");
	for(loop = 9; loop > -1; loop--)
    	printf("%d ", array2[loop]);
	printf("\n\n");
	
	
	// Ejercicio 3
	printf("3) Matriz de enteros 3x3 (F1: 100, 74, 99; F2: 11, 36, 68; F3: 23, 9, 81).\n");
	int array3[3][3] = {{100, 74, 99}, {11, 36, 68}, {23, 9, 81}};
	
	printf("\n");
	for(loop = 0; loop < 3; loop++)
    	printf("\t %d ", array3[0][loop]);
    	
	printf("\n");
	for(loop = 0; loop < 3; loop++)
    	printf("\t %d ", array3[2][loop]);
    	
	printf("\n");
	for(loop = 0; loop < 3; loop++)
    	printf("\t %d ", array3[3][loop]);
    	
	printf("\n\n");
	
	// Ejercicio 4
	printf("4) Array de char con la palabra “Bienvenidos”.\n");
	char array4[12] = "Bienvenidos";
	printf("\n\t");
		for(loop = 0; loop < 12; loop++)
    	printf("%c", array4[loop]);
    	
	printf("\n\n");
	
	// Ejercicio 5
	printf("5) Ingresar 10 valores en un vector de enteros. Mostrar suma de todos. Usar: con y sin bucles.\n");
	int array5[10] = {0, 1, 2, 3, 4, 5, 6 , 7, 8 , 9};
	
	int acumulador = 0;
	acumulador =	array5[0] + array5[1] + array5[2] + array5[3] + array5[4] +
					array5[5] + array5[6] + array5[7] + array5[8] + array5[9] ;
	printf("\n\t Sin bucle: %d", acumulador);
	
	acumulador = 0;
	for(loop = 0; loop < 10; loop++)
    	acumulador += array5[loop];
	printf("\n\t Con bucle: %d", acumulador); 
	
	printf("\n\n");
	
	// Ejercicio 6
	printf("6) Ingreso por pantalla nro de mes. Mostrar días de ese mes.\n");
	int array6i[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char array6c[][11] = {"enero", "febrero", "marzo", "abril", "mayo", "junio",
		"julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
	int mes = 0;
	
	printf("\n");
	do {
		printf("\t ¿Mes?: ");
		scanf("%d", &mes);
		if (mes<1 || mes>12)
			printf("\t Ingrese un mes válido (entre 1 y 12)\n");
	} while (mes<1 || mes>12);
	
	printf("\t %s tiene %d días.", array6c[mes-1], array6i[mes-1]);
	
	printf("\n\n");
	
	// Ejercicio 7
	printf("7) Ingreso de 2 matrices 2x2. Multiplicarlas.\n");

	int A[2][2], B[2][2], C[2][2];
  	int i, j, k;
	printf("\n");
  
	// Cargar matriz A.
  	for(i=0; i < 2; i++) {
    	for(j=0; j < 2; j++) {
      		printf("\t Valor para A[ %d, %d ] + ENTER: ", i+1, j+1);
      		scanf("%d", &A[i][j]);
    	}
  	}
  	printf("\n");
	
  	// Cargar matriz B.
  	for(j=0; j < 2; j++) {
    	for(k=0; k < 2; k++) {
      		printf("\t Valor para B[ %d, %d ] + ENTER: ", j+1, k+1);
      		scanf("%d", &B[j][k]);
    	}
  	}
  	printf("\n");

  	// Mostrar matriz A.
  	printf("\t Matriz A\n");
  	for(i = 0; i < 2; i++) {
    	for(j = 0; j < 2; j++) {
      	printf("\t %d ", A[i][j]);
    	}
    	printf("\n");
  	}
  	printf("\n");
	
  	// Mostrar matriz B.
  	printf("\t Matriz B\n");
  	for(j = 0; j < 2; j++) {
    	for(k = 0; k < 2; k++) {
      		printf("\t %d ", B[j][k]);
    	}
    	printf("\n");
  	}
  	printf("\n");
	
  	// Multiplicado.
  	for(i=0; i < 2; i++) {
    	for(j=0; j < 2; j++) {
      		C[i][j] = 0;
      		for(k=0; k < 2; k++) { 
        		C[i][j] += A[i][k]*B[k][j];
      		}
    	}
  	}
	
  	// Mostrar matriz C (resultado).
  	printf("\t El producto AB es:\n");
  	for(i = 0; i < 2; i++) {
    	for(k = 0; k < 2; k++) {
      		printf("\t %d ", C[i][k]);
    	}
    	printf("\n");
  	}
	printf("\n");
	
	// Ejercicio 8
	printf("8) ¿Qué meses tienen 30 días?\n");
	
	// Voy a usar el array6i ya definido en el punto 6.
	int contador = 0;
	
	printf("\n");
	for(loop = 0; loop<12; loop++) {
		if (array6i[loop]==30) {
			contador++;
			printf("\t Mes nro de 30 días: %d \n", loop+1);
		}
	}
	printf("\n");
	
	printf("\t Meses de 30 días: %d", contador);
	
	// Salida.
	printf("\n");
	return 0;
}


/* FUNCIONES */
