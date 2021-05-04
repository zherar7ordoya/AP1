/**
* UAI
* Analista Programador
* Programaci�n Estructurada
* Comisi�n 1-ON
* 
* @title TRABAJO PR�CTICO OBLIGATORIO 2
* @author Gerardo Tordoya
* @date Nov-220
*/

////////////////////////////////////////////////////////////////////// LIBRER�AS

#include <stdio.h>	// B�sicas.
#include <stdlib.h>
#include <wchar.h>	// Internacionalizaci�n.
#include <locale.h>
#include <string.h>	// Espec�ficas.

///////////////////////////////////////////////////////////////////// PROTOTIPOS

int simbologia(char vector[], int devolucion);
int formato(char vector[], int devolucion);
int conversion(char vector[], int devolucion);
int conversor(char letra);

////////////////////////////////////////////////////////////////////// PRINCIPAL
int main()
{
	setlocale(LC_ALL, "");	// Espa�ol.
	system("color 06");	// Colores.
	printf("\n\nCONVERSOR NROS ROMANOS A DECIMALES\n\n\n");	// Presentaci�n.

	// INICIALIZACI�N
	char letras[18] = {0};	// El n�mero romano m�s largo (3888) tiene 15 letras.
							// Se suma a 18 para abreviar c�digo de verificaci�n.
	int bucle = 0, escape = 0, resultado = 0;
	char terminar = 'S';

	// PROCESAMIENTO
	while (terminar != 'N' && terminar != 'n')
	{
		do	// Captura de datos.
		{
			printf("\tIngrese un n�mero romano v�lido:\t");
			fgets(letras, sizeof(letras), stdin);
		} while (letras[0] == '\n');	// M�todo para capturar el ENTER.

		letras[strcspn(letras, "\n")] = 0;	// Remover '\n' de FGETS.

		// EVALUACI�N
		if (simbologia(letras, escape) == -1 || formato(letras, escape) == -1)
			printf("\n\t****** S�mbolo o formato no v�lido ******\n\n");

		// CONVERSI�N
		else
		{
			resultado = conversion(letras, resultado);
			memset(&letras[0], 0, sizeof(letras));	// Limpiar el vector.
			printf("\n\tN�mero decimal equivalente: \t\t%d\n\n", resultado);
		}
		
		do	// Captura de datos.
		{
			printf("\t�Continuar? [S/N]:\t\t\t");
			terminar = fgetc(stdin);
		} while (terminar == 0x0A);

		getchar();	// Corrige el error en consola (imprimir dos veces).
		putchar('\n');
	}

	// FINAL
	printf("THE END\n");
	return 0;
}

////////////////////////////////////////////////////////////////////// FUNCIONES

int simbologia(char vector[], int devolucion)
{
	int contador = 0;
	devolucion = 0;

	for (contador = 0; contador < strlen(vector); contador++)
	{
		devolucion = conversor(vector[contador]);
		if (devolucion == -1)
			break;
	}

	return devolucion;
}

int formato(char vector[], int devolucion)
{
	int contador = 0;
	devolucion = 0;

	for (contador = 0; contador < strlen(vector); contador++)
	{
		if (devolucion == -1)
			break;
		if (conversor(vector[contador]) == conversor(vector[contador + 1]))
		{
			switch (conversor(vector[contador]))
			{
			case 1000:
			case 100:
			case 10:
			case 1:
				if (conversor(vector[contador]) == conversor(vector[contador + 2]) && conversor(vector[contador]) == conversor(vector[contador + 3]))
					devolucion = -1;
				break;
			case 500:
			case 50:
			case 5:
				if (conversor(vector[contador]) == conversor(vector[contador + 1]))
					devolucion = -1;
				break;
			default:
				devolucion = 0;
			}
		}
		else if (conversor(vector[contador]) < conversor(vector[contador + 1]))
		{
			switch (conversor(vector[contador]))
			{
			case 100:
			case 10:
			case 1:
				if (conversor(vector[contador]) == conversor(vector[contador + 2]))
					devolucion = -1;
				else if (contador > 0 && conversor(vector[contador - 1]) == conversor(vector[contador]))
					devolucion = -1;
				break;
			default:
				devolucion = 0;
			}

			switch (conversor(vector[contador]))
			{
			case 100:
				if (conversor(vector[contador + 1]) != 500 && conversor(vector[contador + 1]) != 1000)
					devolucion = -1;
				break;
			case 10:
				if (conversor(vector[contador + 1]) != 50 && conversor(vector[contador + 1]) != 100)
					devolucion = -1;
				break;
			case 1:
				if (conversor(vector[contador + 1]) != 5 && conversor(vector[contador + 1]) != 10)
					devolucion = -1;
				break;
			default:
				devolucion = 0;
			}
		}
	}

	return devolucion;
}

int conversion(char vector[], int devolucion)
{
	int contador = 0;
	devolucion = 0;

	for (contador = 0; contador < strlen(vector); contador++)
	{
		if (conversor(vector[contador]) >= conversor(vector[contador + 1]))
			devolucion = devolucion + conversor(vector[contador]);
		else
		{
			devolucion = devolucion + (conversor(vector[contador + 1]) - conversor(vector[contador]));
			contador++;
		}
	}

	return devolucion;
}

///////////////////////////////////////////////////////// FUNCIONES DE FUNCIONES

int conversor(char letra)
{
	int valor = 0;

	switch (letra)
	{
	case 'I':
		valor = 1;
		break;
	case 'V':
		valor = 5;
		break;
	case 'X':
		valor = 10;
		break;
	case 'L':
		valor = 50;
		break;
	case 'C':
		valor = 100;
		break;
	case 'D':
		valor = 500;
		break;
	case 'M':
		valor = 1000;
		break;
	case '\0':
		valor = 0;
		break;
	default:
		valor = -1;
	}

	return valor;
}

