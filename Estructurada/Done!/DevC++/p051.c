

/* GERARDO TORDOYA *\
\*       FSD       */


// Header file for Standard Input Output {printf(), scanf()}
#include <stdio.h>
// Stands for "console input/output" , a Windows-only header {getch(), ungetch()}
#include <conio.h>
// Standard C++ input and output {cout(), cin()}
// #include <iostream>
// Header file for Standard Library {malloc(), free()}
#include <stdlib.h>




//////////////////////////////////////// DECLARACIONES O PROTOTIPOS DE FUNCIONES

void carga_datos(int*, int*);
void informe(void);
void FIN(void);


int main(int argc, char *argv[]) {
	
	printf("\n\n");
	printf("INGRESAR DOS LADOS DE UN TRIANGULO\n");
	printf("INDIQUE SI SON IGUALES\n");
	printf("POR TANTO, SI NO ES UN TRIANGULO ESCALENO\n");
	printf("\n\n");
	
	// Haz lo tuyo...
	int lado1, lado2;
	//system("cls");
	
	carga_datos(&lado1, &lado2);
	
	if(lado1 == lado2) {
		informe();
		FIN();
	}

	//system("pause");
	return 0;
}


////////////////////////////////////////////////////// DEFINICIONES DE FUNCIONES

void carga_datos(int *x, int *y) {
	printf("Ingrese el primer lado:  ");
	scanf("%i", x);
	printf("Ingrese el segundo lado: ");
	scanf("%i", y);
}

void informe(void) {
	printf("Son iguales\n");
}

void FIN(void) {
	printf("\n\nPulse una tecla para finalizar.");
	getch();
}
