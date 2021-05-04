// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio09
	Escribir 'Ingresar el valor de la hora y el tiempo trabajado por un empleado,';
	Escribir 'calcular su sueldo conociendo que recibe un premio de $ 100';
	Escribir 'si trabajo más de 50 hs';
	Escribir 'y si trabajo más de 150 hs le dan otros $ 100 adicionales.';
	Escribir 'Imprimir el sueldo';
	// Variables
	Definir horasTrabajadas Como Entero;
	Definir horaValor Como Real;
	// Inicialización
	Escribir 'Horas trabajadas:';
	Leer horasTrabajadas;
	Escribir 'Valor ($) de la hora:';
	Leer horaValor;
	// Operaciones
	Si (horasTrabajadas>150) Entonces
		Escribir 'Sueldo: $',horasTrabajadas*horaValor+200;
	SiNo
		Si (horasTrabajadas>50) Entonces
			Escribir 'Sueldo: $',horasTrabajadas*horaValor+100;
		SiNo
			Escribir 'Sueldo: $',horasTrabajadas*horaValor;
		FinSi
	FinSi
FinProceso
