// EJERCICIO 7
// Ingresar 2 valores.
// Calcular suma, producto y resta del 1ro menos el 2do
Proceso operar2valores
	// Declarar
	Definir uno,dos,suma,producto,resta Como Real;
	// Inicializar
	Escribir 'Ingrese el 1er valor: ';
	Leer uno;
	Escribir 'Ingrese el 2do valor: ';
	Leer dos;
	// Procesar
	suma <- uno+dos;
	producto <- uno*dos;
	resta <- uno-dos;
	// Comunicar
	Escribir 'La suma es     ',suma;
	Escribir 'El producto es ',producto;
	Escribir 'La resta es    ',resta;
FinProceso
