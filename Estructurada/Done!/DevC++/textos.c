// EL MALDITO STRING

#include <stdio.h>

int main()
{
	printf("\n\nARRAY CON LENGTH DECLARADO \n");
	char cCadena[15] = "Estoy limitada";
	printf("Cadena: %s", cCadena);
	
	printf("\n\nARRAY SIN LENGTH DECLARADO \n");
	char sCadena[] = "Nada, soy libre";
	printf("Cadena: %s", sCadena);	
	
	printf("\n\nCADENA CON APUNTADOR (PUNTERO) \n");
	char * aCadena = "ABCD EFGH";
	printf("Cadena original: %s", aCadena);
	
	printf("\n");
	aCadena++;
	printf("Cadena c/ operador de incremento: %s", aCadena);
	
	printf("\n");
	aCadena += 2;
	printf("Cadena sumada en 2: %s", aCadena);

	printf("\n\n");
	return 0;
}
