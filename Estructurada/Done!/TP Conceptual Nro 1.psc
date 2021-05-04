// UAI
// Programaci�n Estructurada
// -------------------------
// TP 1 OBLIGATORIO
// -------------------------
// GERARDO TORDOYA
// sep-2020
// ------------------------
////////////////////////////////////////////////////////////////////////////////
// Este programa, dado un a�o y un n�mero de d�a,
// calcula en qu� fecha cae.
// EJEMPLO (si fuera una funci�n):
// function(2020, 255)
// (retornar� 11/sep/2020 como respuesta)
// @param * year A�o a considerar. 
// @param * date D�a del a�o del que se desea saber la fecha.
// NOTA:
// El tipo de estructura de control usada
// se se�ala entre par�ntesis como comentarios.
Algoritmo programa_estructurado
	// VARIABLES
	Definir year,date,salto,dias,mes,adenda Como Entero
	Dimension meses[2,12]
	// INICIALIZAR
	year <- 0
	date <- 0
	salto <- 0
	dias <- 0
	mes <- 1
	// Inicializar vector.
	// (en PSeInt no hay una forma econ�mica de hacerlo).
	// (Secuencia)
	meses[1,1]<-31
	meses[1,2]<-28
	meses[1,3]<-31
	meses[1,4]<-30
	meses[1,5]<-31
	meses[1,6]<-30
	meses[1,7]<-31
	meses[1,8]<-31
	meses[1,9]<-30
	meses[1,10]<-31
	meses[1,11]<-30
	meses[1,12]<-31
	meses[2,1]<-31
	meses[2,2]<-29
	meses[2,3]<-31
	meses[2,4]<-30
	meses[2,5]<-31
	meses[2,6]<-30
	meses[2,7]<-31
	meses[2,8]<-31
	meses[2,9]<-30
	meses[2,10]<-31
	meses[2,11]<-30
	meses[2,12]<-31
	// INPUT
	// (Secuencia)
	Escribir 'Ingrese a�o: ' Sin Saltar
	Leer year
	Escribir 'Ingrese d�a: ' Sin Saltar
	Leer date
	// DETERMINAR SET
	// (Alternativa/Selecci�n)
	Si ((year MOD 400=0) O (year MOD 100<>0) Y (year MOD 4=0)) Entonces
		salto <- 2
	SiNo
		salto <- 1
	FinSi
	// VALIDAR RANGOS COMPUTABLES.
	// (Alternativa/Selecci�n)
	Si (year<1753 O year>3999 O date<=0 O date>365+salto-1) Entonces
		Escribir 'No computable. Intente con otros datos.'
	SiNo
		// (Repetici�n/Iteraci�n)
		Mientras date>dias+meses[salto,mes] Hacer
			dias <- dias+meses[salto,mes]
			mes <- mes+1
		FinMientras
		// MOSTRAR RESULTADO EN PANTALLA (OUTPUT)
		Escribir 'D�a: ',date-dias,' || Mes: ',mes
	FinSi
FinAlgoritmo
