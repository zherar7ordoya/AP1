// UAI - P Estructurada
// TRABAJO PR�CTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio05
	Escribir 'Ingresar los tres lados de un tri�ngulo e indicar que tipo de tri�ngulo es';
	// Variables
	Definir uno,dos,tres Como Real;
	// Inicializaci�n
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	Escribir 'Ingrese 3er valor';
	Leer tres;
	// Operaciones
	Si (uno=dos & dos=tres) Entonces
		Escribir 'Los tres lados son iguales: es equil�tero';
	SiNo
		Si (uno<>dos & dos<>tres & tres<>uno) Entonces
			Escribir 'Los tres lados difieren: es escaleno';
		SiNo
			Escribir 'Dos lados coinciden: es is�sceles';
		FinSi
	FinSi
FinProceso
