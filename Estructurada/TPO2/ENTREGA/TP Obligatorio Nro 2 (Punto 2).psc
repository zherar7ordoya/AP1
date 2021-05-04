///**
// * UAI
// * Analista Programador
// * Programación Estructurada
// * Comisión 1-ON
// * 
// * @title TRABAJO PRÁCTICO OBLIGATORIO 2
// * @author Gerardo Tordoya
// * @date Nov-2020
// * 
// * @bug MCMM
// */
////////////////////////////////////////////////////////////////////// FUNCIONES
Funcion romanoadecimal(romano,decimal)
	Escribir 'El decimal equivalente de ',romano,' es ',decimal
FinFuncion

Funcion devolucion <- simbologia(letras Por Referencia,devolucion,LIMITE)
	Definir contador Como Entero
	devolucion <- 0
	Para contador<-0 Hasta LIMITE Hacer
		Si devolucion<>-1 Entonces
			devolucion <- conversor(letras[contador])
		FinSi
	FinPara
FinFuncion

Funcion devolucion <- formato(letras Por Referencia,devolucion,LIMITE)
	Definir contador Como Entero
	devolucion <- 0
	Para contador<-0 Hasta LIMITE Hacer
		Si conversor(letras[contador])==conversor(letras[contador+1]) Entonces
			Segun conversor(letras[contador])  Hacer
				1000:
				100:
				10:
				1:
					Si conversor(letras[contador])==conversor(letras[contador+2]) Y conversor(letras[contador])==conversor(letras[contador+3]) Entonces
						devolucion <- -1
					FinSi
				500:
				50:
				5:
					Si conversor(letras[contador])==conversor(letras[contador+1]) Entonces
						devolucion <- -1
					FinSi
				De Otro Modo:
					devolucion <- 0
			FinSegun
		FinSi
		Si conversor(letras[contador])<conversor(letras[contador+1]) Entonces
			Segun conversor(letras[contador])  Hacer
				100:
				10:
				1:
					Si conversor(letras[contador])==conversor(letras[contador+2]) Entonces
						devolucion <- -1
					FinSi
					Si contador>0 Y conversor(letras[contador-1])==conversor(letras[contador]) Entonces
						devolucion <- -1
					FinSi
				De Otro Modo:
					devolucion <- 0
			FinSegun
			Segun conversor(letras[contador])  Hacer
				100:
					Si conversor(letras[contador+1])<>500 Y conversor(letras[contador+1])<>1000 Entonces
						devolucion <- -1
					FinSi
				10:
					Si conversor(letras[contador+1])<>50 Y conversor(letras[contador+1])<>100 Entonces
						devolucion <- -1
					FinSi
				1:
					Si conversor(letras[contador+1])<>5 Y conversor(letras[contador+1])<>10 Entonces
						devolucion <- -1
					FinSi
				De Otro Modo:
					devolucion <- 0
			FinSegun
		FinSi
	FinPara
FinFuncion

Funcion devolucion <- conversion(letras Por Referencia,devolucion,LIMITE)
	Definir contador Como Entero
	devolucion <- 0
	Para contador<-0 Hasta LIMITE Hacer
		Si conversor(letras[contador])>=conversor(letras[contador+1]) Entonces
			devolucion <- devolucion+conversor(letras[contador])
		SiNo
			devolucion <- devolucion+(conversor(letras[contador+1])-conversor(letras[contador]))
			contador <- contador+1
		FinSi
	FinPara
FinFuncion

Funcion value <- conversor(letra)
	Definir value Como Entero
	Segun letra  Hacer
		'I':
			value <- 1
		'V':
			value <- 5
		'X':
			value <- 10
		'L':
			value <- 50
		'C':
			value <- 100
		'D':
			value <- 500
		'M':
			value <- 1000
		'0':
			value <- 0
		De Otro Modo:
			value <- -1
	FinSegun
FinFuncion

////////////////////////////////////////////////////////////////////// PRINCIPAL
Algoritmo main
	Escribir ''
	Escribir 'Diseñado a conciencia. Pruebe con valores que otros conversores'
	Escribir 'darían error. Ejemplo: IIX, xv, IXI, XVV, LLd, IIII, etc...'
	Escribir ''
	Dimension letras[18]
	Definir bucle,escape,resultado,contador,LIMITE Como Entero
	Definir S,terminar Como Caracter
	Repetir
		Repetir
			Escribir 'Ingrese un número romano válido: ' Sin Saltar
			Leer S
		Hasta Que LONGITUD(S)<11
		LIMITE <- LONGITUD(S)-1
		Para contador<-0 Hasta LIMITE Hacer
			letras[contador] <- SUBCADENA(S,contador,contador)
		FinPara
		Si simbologia(letras,escape,LIMITE)=-1 O formato(letras,escape,LIMITE)=-1 Entonces
			Escribir '***  Símbolo/formato no válido  ***'
		SiNo
			resultado <- conversion(letras,resultado,LIMITE)
			romanoadecimal(S,resultado)
			Para contador<-0 Hasta 17 Hacer
				letras[contador] <- ''
			FinPara
		FinSi
		Escribir '              ¿Continuar? [S/N]: ' Sin Saltar
		Leer terminar
		Escribir ''
	Hasta Que terminar='N' O terminar='n'
FinAlgoritmo
