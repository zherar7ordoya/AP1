// EJERCICIO 10
// Una concesionaria desea liquidar sueldos.
// Se ingresa valor del veh�culo y cu�ntos veh�culos vendi�.
// Sueldo: $500 + 10 MOD  por cada venta + $50 por cada venta.

Proceso calcularConcesionaria
	
	// DEFINIR
	Definir valorVehiculo,cantidadVehiculos,sueldo Como Real;
	
	// CARGAR
	Escribir 'Valor del veh�culo vendido (por unidad): ';
	Leer valorVehiculo;
	Escribir 'Cantidad de unidades vendidas: ';
	Leer cantidadVehiculos;
	
	// PROCESAR
	sueldo <- 500+(valorVehiculo*cantidadVehiculos/10)+(50*cantidadVehiculos);
	
	// OUTPUT
	Escribir 'El empleado tiene un sueldo de ',sueldo;
	
FinProceso
