// UAI - P Estructurada
// TRABAJO PR�CTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio12
	Escribir 'Sobre los datos del ejercicio anterior'
	Escribir 'imprimir los sueldos de los empleados con m�s de 5 a�os de antig�edad'
	Escribir ''
	Escribir ''
	Escribir ''
	// Variables
	Definir sueldo Como Real
	Definir categoria,antiguedad Como Entero
	// Inicializaci�n
	Escribir 'Sueldo'
	Leer sueldo
	Escribir 'Categor�a'
	Leer categoria
	Escribir 'Antig�edad'
	Leer antiguedad
	// Operaciones
	Si (categoria=1 Y antiguedad>5) Entonces
		Escribir 'Sueldo: ',sueldo+(antiguedad*50)
	FinSi
	// Finalizaci�n
	Esperar Tecla
FinAlgoritmo
