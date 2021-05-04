// UAI * Analista Programador
// Programación Estructurada * Comisión 1-ON
// TP 3
// Tordoya, Gerardo * 25-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto3
	
	Escribir "Ingresar 10 valores, indicar e imprimir cuántos son positivos,";  
	Escribir "cuántos negativos y cuántos ceros";
	
	// VARIABLES
	Definir positivos, negativos, ceros, dato Como Entero;
	
	// INICIALIZAR
	positivos <- 0;
	negativos <- 0;
	ceros <- 0;
	dato <- 0;
	
	// INPUT
	Para x Desde 1 Hasta 10 Hacer
		Escribir "Valor ", x, ": " Sin Saltar;
		Leer dato;
		Si dato > 0 Entonces
			positivos <- positivos + 1;
		FinSi
		Si dato < 0 Entonces
			negativos <- negativos + 1;
		FinSi
		Si dato = 0 Entonces
			ceros <- ceros + 1;
		FinSi
	FinPara
	
	// OUTPUT
	Escribir "Positivos: ", positivos;
	Escribir "Negativos: ", negativos;
	Escribir "Ceros: ", ceros;
	
FinAlgoritmo
