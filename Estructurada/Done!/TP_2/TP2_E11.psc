// UAI - P Estructurada
// TRABAJO PR�CTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio11
	Escribir 'Ingresar el sueldo, categor�a y antig�edad de un empleado,'
	Escribir 'calcular el sueldo final de cada uno de ellos,'
	Escribir 'si el empleado es de la categor�a 1'
	Escribir 'se le adicionara $50 por cada a�o de antig�edad.'
	Escribir ''
	// Variables
	Definir sueldo Como Real
	Definir categoria, antiguedad Como Entero
	// Inicializaci�n
	Escribir 'Sueldo'
	Leer sueldo
	Escribir 'Categor�a'
	Leer categoria
	Escribir 'Antig�edad'
	Leer antiguedad
	// Operaciones
	Si (categoria = 1) Entonces
		Escribir 'Sueldo: ', sueldo + (antiguedad * 50)
	SiNo
		Escribir 'Sueldo', sueldo
	FinSi
	// Finalizaci�n
	Esperar Tecla
FinAlgoritmo