Algoritmo ValidarLados
	
	//Declaraci�n de variables
	definir lado1 Como Entero
	definir lado2 Como Entero
	definir total Como Entero
	definir categoria Como Entero
	//Inicializaci�n de variables
	lado1 <- 0
	lado2 <- 0
	total <- 0
	categoria <- 0
	
	Escribir "Por favor ingrese el lado nro 1"
	Leer lado1
	
	Escribir "Por favor ingrese el lado nro 2"
	Leer lado2
	
	Si lado1 > lado2 Entonces
		//Mi decisi�n por la VERDAD
		total <- lado1 + lado2
		Escribir "La suma es ", total
	SiNo
		//POR LO FALSO VUELVO A PREGUNTAR?
		Si lado1 < lado2 Entonces
			total <- lado1 * lado2
			Escribir "El producto es ", total
		SiNo
			//ambos son iguales...
			total <- lado1 - lado2
			Escribir "La resta es ", total
		Fin Si		
	Fin Si	
	
	Escribir "Por favor ingrese una categor�a [1,2,3]"
	Leer categoria
	
	Segun categoria Hacer
		
		1:
			Escribir "Categor�a seleccionada: 1"
			Escribir "Muchas gracias!"
		2:
			Escribir "Categor�a seleccionada: 1"
			Escribir "Muchas gracias!"
		3:
			Escribir "Categor�a seleccionada: 3"
			Escribir "Muchas gracias!"
			
		De Otro Modo:
			Escribir "Categor�a no v�lida"
			
	Fin Segun
	
	
	
FinAlgoritmo
