#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		/* Declaración e inicialización de variables */
	int lado1 = 0;
	int lado2 = 0;
	int total = 0;
		
	printf("Por favor ingrese el lado nro 1\n");
	scanf("%d", &lado1);
	
	printf("Por favor ingrese el lado nro 2\n");
	scanf("%d", &lado2);
	
	/*if (lado1==lado2) 
		printf("Los lados son iguales");
	else
		printf("Los lados no son iguales");	*/
	
	//SI ANIDADO
	if (lado1 > lado2) {
		total = lado1 + lado2;
		printf("La suma es: %d\n", total);
	}
	else{
		if (lado1 < lado2) {
			total = lado1 * lado2;
			printf("El producto es: %d\n", total);
		}
		else{
			total = lado1 - lado2;
			printf("La resto es: %d\n", total);
		}
	}
	
	//if, else if, else
	if (lado1 > lado2) {
		total = lado1 + lado2;
		printf("La suma es: %d\n", total);		
	}
	else if (lado1 < lado2)	{
		total = lado1 * lado2;
		printf("El producto es: %d\n", total);
	}
	else{	
		total = lado1 - lado2;
		printf("La resto es: %d\n", total);		
	}	
	////////////////////////////////////////////////////////////////
	//switch case
	int categoria = 0;
	
	printf("Por favor ingrese una categoria [1, 2, 3]. 0 para salir\n");
	scanf("%d", &categoria);
	
	switch(categoria){		
		case 1:
			printf("La categoria es la nro 1\n");
			printf("Muchas gracias!\n");
			break;
		case 2:
			printf("La categoria es la nro 2\n");
			break;
		case 3:
			printf("La categoria es la nro 3\n");
			break;
		default:
			printf("La categoria no es valida\n");		
	}
	
	
	int a = 10; //Edad de una persona a 
	int b = 20; //Edad de una persona b
	
	//Y
	if(a >= 10 && b>= 20 && a <100)
	{
				
	}
	
	//O
	if(a > 10 || (b > 10 && a < 100))
	{	
				
	}
	
	//NOT	
	if(!(a >= 10 && b>= 20))
	{
		
	}
	else
	{
		
	}
	
	return 0;
}




