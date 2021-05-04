/* EJERCICIO 10 */
/* Una concesionaria desea liquidar sueldos. */
/* Se ingresa valor del veh�culo y cu�ntos veh�culos vendi�. */
/* Sueldo: $500 + 10% de las ventas + $50 por cada venta. */

#include<stdio.h>

int main() {
	
	printf("LIQUIDAR SUELDO A VENDEDOR DE CONCESIONARIA DE AUTOM�VILES \n");
	
	/* DEFINIR */
	float cantidadVehiculos;
	float sueldo;
	float valorVehiculo;
	
	/* CARGAR */
	printf("Valor del veh�culo vendido (por unidad): ");
	scanf("%f",&valorVehiculo);
	printf("Cantidad de unidades vendidas: ");
	scanf("%f",&cantidadVehiculos);
	
	/* PROCESAR */
	sueldo = 500 + (valorVehiculo * cantidadVehiculos / 10) + (50 * cantidadVehiculos);
	
	/* OUTPUT */
	printf("El empleado tiene un sueldo de %f\n",sueldo);
	
	return 0;
	
}

