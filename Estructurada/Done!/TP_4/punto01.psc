// UAI * Analista Programador
// Programación Estructurada * Comisión 1-ON
// TP 4
// Tordoya, Gerardo * 26-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto01
	
	Escribir "Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados ";  
	
	// VARIABLE
	Definir acumulador, contador, dato Como Entero;
	Definir bandera Como Logico
	
	// INICIALIZACIÓN
	acumulador <- 0;
	contador <- 1;
	dato <- 0;
	bandera <- Falso;
	
	// PROCESO
	Repetir
		Escribir "¿Ingresar sueldo? (1 para continuar || 0 para terminar): " Sin Saltar;
		Leer bandera
		
		// INPUT
		Si bandera Entonces
			Escribir "Sueldo #", contador, ": " Sin Saltar;
			Leer dato;
			acumulador <- acumulador + dato;
			contador <- contador + 1;
			
		// OUTPUT	
		SiNo
			Si contador = 1 Entonces
				contador <- 0;
			FinSi
			Escribir "Total: $", acumulador;
			Escribir "Promedio: $", acumulador / (contador - 1);
		FinSi
		
	Hasta Que No bandera
	
	
FinAlgoritmo
