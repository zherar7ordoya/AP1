// UAI * Analista Programador
// Programaci�n Estructurada * Comisi�n 1-ON
// TP 3
// Tordoya, Gerardo * 25-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto1
	
	Escribir "Ingresar 25 n�meros, calcular su promedio e imprimirlo";
	
	// VARIABLES
	Definir dato, acumulador Como Real
		
	// INICIALIZAR
	dato <- 0;
	acumulador <- 0;
	
	// INPUT
	Para x Desde 1 Hasta 25 Hacer
		Escribir "Ingrese el dato ", x, ": " Sin Saltar;
		Leer dato;
		acumulador <- acumulador + dato;
	FinPara
	
	// OUTPUT
	Escribir "El promedio es ", acumulador / 25;
	
FinAlgoritmo
