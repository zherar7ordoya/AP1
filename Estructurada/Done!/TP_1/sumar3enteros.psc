// EJERCICIO 2
// Sumar 3 enteros
// Sumar 2 operandos por vez.

Proceso sumar3enteros
	// Declarar
	Definir uno,dos,tres, subtotal, total Como Entero;
	
	// Inicializar
	Escribir 'Ingrese 1er entero: ';
	Leer uno;
	Escribir 'Ingrese 2do entero: ';
	Leer dos;
	
	// Procesar
	subtotal <- uno + dos;
	
	// Comunicar
	Escribir subtotal;
	
	// Cargar
	Escribir 'Ingrese 3er entero: ';
	Leer tres;
	
	// Procesar
	total <- subtotal + tres;
	
	// Comunicar
	Escribir "La suma de los tres enteros es ", total;
	
FinProceso
