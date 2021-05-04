/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	/* Declaración e inicialización de variables */
	int lado1 = 0;
	int lado2 = 0;
	

	printf("Por favor ingrese el lado nro 1\n");
	scanf("%d", &lado1);
	
	printf("Por favor ingrese el lado nro 2\n");
	scanf("%d", &lado2);
	
	if (lado1==lado2) {
		printf("Los lados son iguales\n");
	}
	return 0;
}

