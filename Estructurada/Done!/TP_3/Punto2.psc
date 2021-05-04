// UAI * Analista Programador
// Programación Estructurada * Comisión 1-ON
// TP 3
// Tordoya, Gerardo * 25-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto2
	
	Escribir "Ingresar 20 notas y nombres de alumnos, indicar e imprimir los";
	Escribir "aplazados (menos de 4) y el nombre a quien pertenece esa nota";
	
	// VARIABLES
	Dimension nombres[20];
	Dimension notas[20];
	
	// INPUT
	Para x Desde 1 Hasta 20 Hacer
		Escribir "Dato ", x, "-> Ingrese nombre: " Sin Saltar;
		Leer nombres[x];
		Escribir "Dato ", x, "-> Ingrese nota: " Sin Saltar;
		Leer notas[x];
	FinPara
	
	// OUTPUT
	Para x Desde 1 Hasta 20 Hacer
		Si notas[x] < 4 Entonces
			Escribir "Nombre: ", nombres[x], " * Nota: ", notas[x];
		FinSi
	FinPara
	
FinAlgoritmo
