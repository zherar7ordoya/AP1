// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio07
	Escribir 'Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de estas sumas es mayor';
	// Variables
	Definir uno,dos,tres,cuatro Como Real;
	// Inicialización
	Escribir 'Ingrese 1er valor';
	Leer uno;
	Escribir 'Ingrese 2do valor';
	Leer dos;
	Escribir 'Ingrese 3er valor';
	Leer tres;
	Escribir 'Ingrese 4to valor';
	Leer cuatro;
	// Operaciones
	Si ((uno+dos)>(tres+cuatro)) Entonces
		Escribir 'El 1er caso es mayor';
	SiNo
		Si ((uno+dos)<(tres+cuatro)) Entonces
			Escribir 'El 2do caso es mayor';
		FinSi
	FinSi
FinProceso
