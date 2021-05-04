// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio05
	Escribir 'Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es';
	// Variables
	Definir uno,dos,tres Como Real;
	// Inicialización
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	Escribir 'Ingrese 3er valor';
	Leer tres;
	// Operaciones
	Si (uno=dos & dos=tres) Entonces
		Escribir 'Los tres lados son iguales: es equilátero';
	SiNo
		Si (uno<>dos & dos<>tres & tres<>uno) Entonces
			Escribir 'Los tres lados difieren: es escaleno';
		SiNo
			Escribir 'Dos lados coinciden: es isósceles';
		FinSi
	FinSi
FinProceso
