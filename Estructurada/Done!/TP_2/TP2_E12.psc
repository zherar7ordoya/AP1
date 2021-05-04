// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio12
	Escribir 'Sobre los datos del ejercicio anterior'
	Escribir 'imprimir los sueldos de los empleados con más de 5 años de antigüedad'
	Escribir ''
	Escribir ''
	Escribir ''
	// Variables
	Definir sueldo Como Real
	Definir categoria,antiguedad Como Entero
	// Inicialización
	Escribir 'Sueldo'
	Leer sueldo
	Escribir 'Categoría'
	Leer categoria
	Escribir 'Antigüedad'
	Leer antiguedad
	// Operaciones
	Si (categoria=1 Y antiguedad>5) Entonces
		Escribir 'Sueldo: ',sueldo+(antiguedad*50)
	FinSi
	// Finalización
	Esperar Tecla
FinAlgoritmo
