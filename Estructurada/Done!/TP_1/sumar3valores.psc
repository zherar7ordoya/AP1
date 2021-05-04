// EJERCICIO 3
// Sumar 3 valores.
// Puede sumarlos al mismo tiempo.

Proceso sumar3valores
	
	// Declarar
	Definir uno, dos, tres, total Como Real;
	
	// Inicializar
	Escribir 'Ingrese 1er valor: ';
	Leer uno;
	Escribir 'Ingrese 2do valor: ';
	Leer dos;
	Escribir 'Ingrese 3er valor: ';
	Leer tres;
	
	// Procesar
	total <- uno + dos + tres;
	
	// Comunicar
	Escribir 'La suma de los tres valores es ',total;
	
FinProceso
