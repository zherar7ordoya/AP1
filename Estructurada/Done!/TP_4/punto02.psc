// UAI * Analista Programador
// Programación Estructurada * Comisión 1-ON
// TP 4
// Tordoya, Gerardo * 26-sep-2020
// ------------------------------------------

////////////////////////////////////////////////////////////////////////////////

Algoritmo punto02
	
	Escribir "Ingresar facturas hasta nro de factura = 0, sumar sus importes y";
	Escribir "cúales y cuantas superan los $1000. Imprimir los resultados";
	Escribir "  a)  Sobre el ejercicio anterior indicar cuántas superan";
	Escribir "      los $10000. Imprimir el resultado.";
	Escribir "  b)  Sobre el ejercicio anterior indicar cuántas están";
	Escribir "      entre $400 y $700 inclusive. Imprimir el resultado.";
	
	// VARIABLE
	Dimension vector[100, 2];
	Definir acumulador, contador, fila Como Entero;
	Definir bandera Como Logico;
	
	// INICIALIZACIÓN
	acumulador <- 0;
	contador <- 1;
	fila <- 1;
	
	// PROCESO
	
	Escribir "Nro factura 0 para salir.";
	
	Repetir
		
		Escribir "Registro #", fila, ": Nro factura: " Sin Saltar;
		Leer vector[fila, 1];
		
		// INPUT
		Si vector[fila, 1] <> 0 Entonces
			bandera <- Falso;
			Escribir "Importe factura ", vector[fila, 1], ": " Sin Saltar;
			Leer vector[fila, 2];
			fila <- fila + 1;
			
		// OUTPUT	
		SiNo
			bandera <- Verdadero;
			// Sumar importes
			Para x Desde 1 Hasta fila -1 Hacer
				acumulador <- acumulador + vector[x, 2];
			FinPara
			Escribir "Total ingresado: $", acumulador;
			
			// Cúales y cuantas superan los $1.000
			Escribir "---------------- DETALLE FACTURAS SUPERIORES A $1.000";
			contador <- 0;
			Para x Desde 1 Hasta fila -1 Hacer
				Si vector[x, 2] > 1000 Entonces
					Escribir "Factura ", vector[x, 1], " $", vector[x, 2];
					contador <- contador + 1;
				FinSi
			FinPara
			Escribir "-----------------------------------------------------";
			Escribir "FACTURAS SUPERIORES A $1.000: ", contador;			
			
			// Cúales y cuantas superan los $10.000
			contador <- 0;
			Para x Desde 1 Hasta fila -1 Hacer
				Si vector[x, 2] > 10000 Entonces
					contador <- contador + 1;
				FinSi
			FinPara
			Escribir "FACTURAS SUPERIORES A $10.000: ", contador;			
			
			// Cuántas están entre $400 y $700 inclusive
			contador <- 0;
			Para x Desde 1 Hasta fila -1 Hacer
				Si vector[x, 2] >= 400 Y vector[x, 2] <= 700 Entonces
					contador <- contador + 1;
				FinSi
			FinPara
			Escribir "FACTURAS SUPERIORES ENTRE $400 Y $700: ", contador;			
			
		FinSi
		
	Hasta Que bandera;
	
FinAlgoritmo
