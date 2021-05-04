/* EJERCICIO 9 */
/* Ingresar tiempo trabajado por un operario. */
/* El valor de la hora es $10. */
/* Calcular sueldo. */

#include<stdio.h>

int main() {
	
	printf("CALCULAR SUELDO EN BASE VALOR FIJO POR HORA TRABAJADA \n");
	
	/* DEFINIR */
	int cantidadHoras;
	int sueldo;
	
	/* CARGAR */
	printf("Cantidad de horas: ");
	scanf("%i",&cantidadHoras);
	
	/* PROCESAR */
	sueldo = 10 * cantidadHoras;
	
	/* OUTPUT */
	printf("El empleado tiene un sueldo de %i\n",sueldo);
	
	return 0;
}

