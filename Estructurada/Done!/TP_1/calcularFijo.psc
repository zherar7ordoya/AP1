// EJERCICIO 9
// Ingresar tiempo trabajado por un operario.
// El valor de la hora es $10.
// Calcular sueldo.

Proceso calcularFijo
	// DEFINIR
	Definir nroEmpleado,cantidadHoras,valorHora,sueldo Como Entero;
	// CARGAR
	Escribir 'Nro de empleado:';
	Leer nroEmpleado;
	Escribir 'Cantidad de horas:';
	Leer cantidadHoras;
	Escribir 'Valor de la hora:';
	Leer valorHora;
	// PROCESAR
	sueldo <- valorHora*cantidadHoras;
	// OUTPUT
	Escribir 'El empleado ',nroEmpleado,' tiene un sueldo de ',sueldo;
FinProceso
