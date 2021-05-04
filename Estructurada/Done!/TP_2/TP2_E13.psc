// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio13
	Escribir 'Ingresar las horas trabajadas por un empleado y su categoría,'
	Escribir 'calcular su sueldo sabiendo que'
	Escribir 'los empleados de la categoría 1 cobran $50,'
	Escribir 'la 2 cobra $ 70'
	Escribir 'y la 3 cobra $ 80.'
	// Variables
	Definir horas,categoria Como Entero
	// Inicialización
	Escribir 'Horas trabajadas'
	Leer horas
	Escribir 'Categoría'
	Leer categoria
	// Operaciones
	Segun categoria  Hacer
		1:
			Escribir 'Sueldo: ',horas*50
		2:
			Escribir 'Sueldo: ',horas*70
		3:
			Escribir 'Sueldo: ',horas*80
		De Otro Modo:
			Escribir 'Dato no computable'
	FinSegun
	Esperar Tecla
	// Finalización
FinAlgoritmo
