// UAI - P Estructurada
// TRABAJO PRÁCTICO 2
// Gerardo Tordoya
// 2020-09-09
// ----------
Proceso ejercicio08
	Escribir 'Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad';
	// Variables
	Definir unoEdad, dosEdad  Como Entero;;
	Definir unoAltura,  dosAltura Como Real;
	// Inicialización
	Escribir '1ra persona: ¿edad?';
	Leer unoEdad;
	Escribir '1ra persona: ¿altura?';
	Leer unoAltura;
	Escribir '2da persona: ¿edad?';
	Leer dosEdad;
	Escribir '2da persona: ¿altura?';
	Leer dosAltura;
	// Operaciones
	Si (unoEdad > dosEdad) Entonces
		Escribir 'Altura 1ra persona: ', unoAltura;
	SiNo
		Si (unoEdad < dosEdad) Entonces
			Escribir 'Altura 2da persona: ', dosAltura;
		FinSi
	FinSi
FinProceso
