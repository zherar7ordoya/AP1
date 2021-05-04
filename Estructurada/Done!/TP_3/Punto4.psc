// UAI * Analista Programador
// Programación Estructurada * Comisión 1-ON
// TP 3
// Tordoya, Gerardo * 25-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto4
	
	Escribir "Ingresar  8  valores  por  teclado,  y  a  partir  de  esto";  
	Escribir "sacar  el  promedio  general,  sacar  el promedio  de  los";
	Escribir "valores  pares y  el  promedio  de  los valores  impares.";
	Escribir "Luego mostrar por pantalla cuantos números superaron el valor 15.";
	
	// VARIABLES
	Dimension vector[8];
	Definir acumulador Como Real;
	Definir contador Como Entero;
	
	// INPUT
	Para x Desde 1 Hasta 8 Hacer
		Escribir "Valor #", x, ": " Sin Saltar;
		Leer vector[x];
	FinPara
	
	// OUTPUT PROMEDIO GENERAL
	acumulador <- 0;
	contador <- 0;
	Para x Desde 1 Hasta 8 Hacer
		acumulador <- acumulador + vector[x];
	FinPara
	Escribir "Promedio general: ", acumulador / 8;
	
	// OUTPUT PROMEDIO PARES
	acumulador <- 0;
	contador <- 0;
	Para x Desde 1 Hasta 8 Hacer
		Si vector[x] Mod 2 = 0 Entonces
			acumulador <- acumulador + vector[x];
			contador <- contador + 1;
		FinSi
	FinPara
	Escribir "Promedio pares: ", acumulador / contador;
	
	// OUTPUT PROMEDIO IMPARES
	acumulador <- 0;
	contador <- 0;
	Para x Desde 1 Hasta 8 Hacer
		Si vector[x] Mod 2 <> 0 Entonces
			acumulador <- acumulador + vector[x];
			contador <- contador + 1;
		FinSi
	FinPara
	Escribir "Promedio impares: ", acumulador / contador;
	
	// OUTPUT MAYORES A 15
	acumulador <- 0;
	contador <- 0;
	Para x Desde 1 Hasta 8 Hacer
		Si vector[x] > 15 Entonces
			contador <- contador + 1;
		FinSi
	FinPara
	Escribir "Mayores a 15: ", contador;
	
FinAlgoritmo
