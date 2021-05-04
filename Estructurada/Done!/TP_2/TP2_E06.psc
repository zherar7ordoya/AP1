// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio06
	Escribir 'Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos valores es mayor al promedio';
	// Variables
	Definir uno,dos,tres, promedio Como Real;
	// Inicialización
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	Escribir 'Ingrese 3er valor';
	Leer tres;
	// Operaciones
	promedio <- (uno + dos + tres) / 3;
	Si (uno > promedio) Entonces
		Escribir 'El 1er valor es mayor al promedio';
	FinSi
	Si (dos > promedio) Entonces
		Escribir 'El 2do valor es mayor al promedio';
	FinSi
	Si (tres > promedio) Entonces
		Escribir 'El 3er valor es mayor al promedio';
	FinSi
FinProceso
