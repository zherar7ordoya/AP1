/* EJERCICIO 7 */
/* Ingresar 2 valores. */
/* Calcular suma, producto y resta del 1ro menos el 2do */

#include<stdio.h>

int main() {
	
	printf("CALCULAR SUMA, PRODUCTO Y RESTA DE DOS VALORES \n");
	
	/* Declarar */
	float dos;
	float producto;
	float resta;
	float suma;
	float uno;

	/* Inicializar */
	printf("Ingrese el 1er valor: ");
	scanf("%f",&uno);
	printf("Ingrese el 2do valor: ");
	scanf("%f",&dos);
	
	/* Procesar */
	suma = uno + dos;
	producto = uno * dos;
	resta = uno - dos;
	
	/* Comunicar */
	printf("La suma es     %f\n",suma);
	printf("El producto es %f\n",producto);
	printf("La resta es    %f\n",resta);
	
	return 0;
}

