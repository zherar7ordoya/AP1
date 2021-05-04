// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio11
	Escribir 'Ingresar el sueldo, categoría y antigüedad de un empleado,'
	Escribir 'calcular el sueldo final de cada uno de ellos,'
	Escribir 'si el empleado es de la categoría 1'
	Escribir 'se le adicionara $50 por cada año de antigüedad.'
	Escribir ''
	// Variables
	Definir sueldo Como Real
	Definir categoria, antiguedad Como Entero
	// Inicialización
	Escribir 'Sueldo'
	Leer sueldo
	Escribir 'Categoría'
	Leer categoria
	Escribir 'Antigüedad'
	Leer antiguedad
	// Operaciones
	Si (categoria = 1) Entonces
		Escribir 'Sueldo: ', sueldo + (antiguedad * 50)
	SiNo
		Escribir 'Sueldo', sueldo
	FinSi
	// Finalización
	Esperar Tecla
FinAlgoritmo