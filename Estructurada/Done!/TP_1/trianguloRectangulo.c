/* EJERCICIO 5 Y 6 */
/* Ingresar 2 lados de un tri�ngulo rect�ngulo. */
/* Calcular hipotenusa, per�metro y superficie. */

#include<stdio.h>
#include<math.h>

int main() {
	
	printf("CALCULAR HIPOTENUSA, PER�METRO Y SUPERFICIE DE UN TRI�NGULO RECT�NGULO \n");

	/* Declarar */	
	float dos;
	float hipotenusa;
	float perimetro;
	float superficie;
	float uno;

	/* Inicializar */
	printf("Ingrese el valor de uno de los lados del �ngulo recto: ");
	scanf("%f",&uno);
	printf("Ingrese el valor del otro lado del �ngulo recto: ");
	scanf("%f",&dos);
	
	/* Procesar */
	hipotenusa = sqrtf( (uno * uno) + (dos * dos) );
	perimetro = uno + dos + hipotenusa;
	superficie = (uno * dos) / 2;
	
	/* Comunicar */
	printf("La hipotenusa del tri�ngulo es	%f\n", hipotenusa);
	printf("El per�metro del tri�ngulo es	%f\n", perimetro);
	printf("La superficie del tri�ngulo es	%f\n", superficie);
	return 0;
}

