// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio03
	Escribir ' Ingresar dos valores y realizar e imprimir el producto si el 1ro es mayor al 2do, si son iguales solo indicarlo';
	// Variables
	Definir uno,dos Como Real;
	// Inicialización
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	// Operaciones
	Si (uno>dos) Entonces
		Escribir 'El producto entre el 1ro y el 2do es ',uno*dos;
	SiNo
		Si (uno=dos) Entonces
			Escribir 'Los valores son iguales';
		FinSi
	FinSi
FinProceso
