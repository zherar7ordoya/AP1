/* EJERCICIO 0 Y 8 */
/* Ingresar valor de la hora y horas trabajadas. */
/* Calcular sueldo. */

#include<stdio.h>

int main() {
	
	printf("CALCULAR SUELDO BASADO EN HORAS TRABAJADAS Y VALOR HORA TRABAJADA \n");
	
	/* DEFINIR */
	int cantidadHoras;
	int nroEmpleado;
	int sueldo;
	int valorHora;

	/* CARGAR */
	printf("Nro de empleado: ");
	scanf("%i",&nroEmpleado);
	printf("Cantidad de horas: ");
	scanf("%i",&cantidadHoras);
	printf("Valor de la hora: ");
	scanf("%i",&valorHora);
	
	/* PROCESAR */
	sueldo = valorHora * cantidadHoras;
	
	/* OUTPUT */
	printf("El empleado %i tiene un sueldo de %i\n",nroEmpleado,sueldo);
	
	return 0;
}

