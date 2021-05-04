// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio04
	Escribir 'Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor';
	// Variables
	Definir uno,dos Como Real;
	// Inicialización
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	// Operaciones
	Si (uno > dos) Entonces
		Escribir 'La resta del 1ro menos el 2do es ', (uno - dos);
	SiNo
		Si (uno < dos) Entonces
			Escribir 'La resta del 2do menos el 1ro es ', (dos - uno);
		FinSi
	FinSi
FinProceso
