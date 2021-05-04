#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//**************************** (1)
	// NOMBRE Y APELLIDO, DNI
	//**************************** (2)
	char cadena[] = "FINAL";
	int i = 0;
	for (i = strlen(cadena) - 1; i >= 0; i--)
	{
		printf("%c", cadena[i]);
	}
	// Output: LANIF
	putchar('\n');
	//**************************** (3)
	int contador = 0;
	for (int x = 0; x != 10; x--)
	{
		printf("%d\t", x);
		contador++;
		if (contador == 11) break;
	}
	// Output: 0, -1, -2, -3... (infinito)
	putchar('\n');
	//**************************** (4)
	int j = 1;
	int vector[4] = {0, 200, 95, 100};
	vector[3] = 95;
	vector[2] = 100;
	j++;
	printf("%d", vector[j]);
	// Output: 100
	putchar('\n');
	//**************************** (5)
	int tabla[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	tabla[0][2] = tabla[2][2];
	// Output: {
	//	{1, 2, 11, 4},
	//	{5, 6, 7, 8},
	//	{9, 10, 11, 12}
	//}
	putchar('\n');
	//**************************** (6)
	// �Cu�les caracter�sticas son ciertas para las funciones
	// que puede escribir el programador en lenguaje C?
	// [s�] POR PASAJE DE LOS PAR�METROS POR VALOR Y POR REFERENCIA
	// [NO] por pasaje de los par�metros como vectores y matrices exclusivamente
	// [s�] CON DEVOLUCI�N DE FUNCI�N CON CUALQUIER TIPO DEFINIDO POR EL PROGRAMADOR
	// [NO] con devoluci�n de funci�n tipo void exclusivamente
	//**************************** (7)
	int a = 56, b = 56;
	if (a > 56 || b % 2 == 0) printf("a > 56 o b es par");
	// Output: a > 56 o b es par
	putchar('\n');
	//**************************** (8)
	int A[4][4];
	for (int y = 0; y < 3; y++)
		for (int z = 0; z < 4; z++)
			A[y][z] = y * z;
	printf("%d", A[2][3]);
	// Output: 6
	putchar('\n');
	//**************************** (9)
	// Dentro del contexto del lenguaje C
	// �Cu�l es la mejor definici�n para
	// "compilar un c�digo fuente"?
	// [NO] traducir c�digo fuente a c�digo m�quina que puede ejecutarse directamente
	// [s�] TRADUCIR C�DIGO FUENTE A C�DIGO OBJETO
	// [NO] traducir c�digo objeto a c�digo m�quina que puede ejecutarse directamente
	// [NO] ninguna de las anteriores
	//**************************** (10)
	// Al escribir un if, �cu�l es la regla de oro que se debe cumplir?
	// [NO] es indistinto
	// [NO] siempre realizar algo por lo falso
	// [s�] SIEMPRE REALIZAR ALGO POR LO VERDADERO
	// [NO] ninguna de las anteriores
	//**************************** (11)
	// Defina pasaje de par�metros por valor y por referencia.
	// En C, cuando pasamos par�metros a una funci�n, puede hacerse a trav�s de 2 mecanismos:
	
	// POR VALOR: a la funci�n se le env�an DIRECTAMENTE argumentos que ser�n copiados en los par�metros de
	// la misma. Es decir, por cada argumento existir� una copia almacenada en el par�metro correspondiente.
	
	// POR REFERENCIA: en este mecanismo,  no hay una copia de valores, sino una referencia
	// a los valores originales, y la forma de implementarlo es a trav�s de apuntadores.
	
	// Ejemplifique:
	
	// EN EL ADJUNTO
	
	//****************************
	return 0;
}

