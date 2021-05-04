// EJERCICIO 0 Y 8
// Ingresar valor de la hora y horas trabajadas.
// Calcular sueldo.


Algoritmo calcularSueldo
	
	// DEFINIR
	Definir nroEmpleado, cantidadHoras, valorHora, sueldo Como Entero;
	
	// CARGAR
	Escribir "Nro de empleado:";
	Leer nroEmpleado;
	Escribir "Cantidad de horas:";
	Leer cantidadHoras;
	Escribir "Valor de la hora:";
	Leer valorHora;
	
	// PROCESAR
	sueldo = valorHora * cantidadHoras;
	
	// OUTPUT
	Escribir "El empleado ", nroEmpleado, " tiene un sueldo de ", sueldo;
	
FinAlgoritmo
