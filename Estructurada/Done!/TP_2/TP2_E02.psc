// UAI - P Estructurada
// TRABAJO PR�CTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio02
	Escribir 'Ingresar un valor indicar e imprimir si es positivo, negativo o cero';
	// Variables
	Definir cifra Como Real;
	// Inicializaci�n
	Escribir 'Ingrese el valor';
	Leer cifra;
	// Operaciones
	Si (cifra>0) Entonces
		Escribir 'El valor es mayor que cero';
	SiNo
		Si (cifra<0) Entonces
			Escribir 'El valor es menor que cero';
		SiNo
			Escribir 'El valor es cero';
		FinSi
	FinSi
FinProceso
