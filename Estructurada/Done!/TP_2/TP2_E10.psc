// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Algoritmo ejercicio10
	Escribir 'Ingresar tres valores correspondientes al día, mes y año de una fecha,'
	Escribir 'indicar si es válida,'
	Escribir 'considerar los años bisiestos'
	Escribir ''
	Escribir ''
	// Variables
	Definir dia,mes,ano Como Entero
	// Inicialización
	Escribir '¿Día?'
	Leer dia
	Escribir '¿Mes?'
	Leer mes
	Escribir '¿Año?'
	Leer ano
	// Operaciones
	Si (validar(dia,mes,ano)) Entonces
		Escribir 'Es válida'
	SiNo
		Escribir 'Fecha no válida'
	FinSi
	// Finalización
	Esperar Tecla
FinAlgoritmo

Funcion res <- validar(d,m,a Por Valor)
	// Variables
	Definir res Como Logico
	Dimension dias[12]
	// Inicialización del vector
	dias[1] <- 31
	dias[2] <- 28
	dias[3] <- 31
	dias[4] <- 30
	dias[5] <- 31
	dias[6] <- 30
	dias[7] <- 31
	dias[8] <- 31
	dias[9] <- 30
	dias[10] <- 31
	dias[11] <- 30
	dias[12] <- 31
	// Bisiesto
	Si ((a MOD 4=0 Y a MOD 100<>0) O a MOD 400=0) Entonces
		dias[2] <- 29
	FinSi
	// Validación
	res <- Verdadero
	Si (m<1 O m>12) Entonces
		res <- Falso
	FinSi
	Si (d<0 O d>dias[m]) Entonces
		res <- Falso
	FinSi
FinFuncion
