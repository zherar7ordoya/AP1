/* EJERCICIO 5 Y 6 */
/* Ingresar 2 lados de un triángulo rectángulo. */
/* Calcular hipotenusa, perímetro y superficie. */

#include<stdio.h>
#include<math.h>

int main() {
	
	printf("CALCULAR HIPOTENUSA, PERÍMETRO Y SUPERFICIE DE UN TRIÁNGULO RECTÁNGULO \n");

	/* Declarar */	
	float dos;
	float hipotenusa;
	float perimetro;
	float superficie;
	float uno;

	/* Inicializar */
	printf("Ingrese el valor de uno de los lados del ángulo recto: ");
	scanf("%f",&uno);
	printf("Ingrese el valor del otro lado del ángulo recto: ");
	scanf("%f",&dos);
	
	/* Procesar */
	hipotenusa = sqrtf( (uno * uno) + (dos * dos) );
	perimetro = uno + dos + hipotenusa;
	superficie = (uno * dos) / 2;
	
	/* Comunicar */
	printf("La hipotenusa del triángulo es	%f\n", hipotenusa);
	printf("El perímetro del triángulo es	%f\n", perimetro);
	printf("La superficie del triángulo es	%f\n", superficie);
	return 0;
}

