// T�tulo: M�quina de dibujar
// Desarrollador: Gerardo Tordoya
// Fecha: 16-ago-2020
// Notas: UAI - Estructurada - Trabajo Pr�ctico Inicial

// TO-DO (Pendientes).----------------------------------
// Borrar celda
// Error Handling...
// Debug...
// Tests...
// Documentaci�n...

// NOTA: Ni idea de c�mo se hacen en pseudo-c�digo

// ------------------------------------------------------

// FUNCIONES

// Por valor (recuperado en la llamada). Comprueba desborde en la matriz. De haberlo,
// cancela el movimiento solicitado.
// NOTA
// Fue necesario dividir esta funci�n de comprobaci�n pues, debido a la cota de tiempo,
// no hab�a tiempo de pensar en un mecanismo �nico.
// Queda pendiente para la refactorizaci�n.
Funcion res <- comprobarDesbordeFilas(posicionY, posicionX, siguienteFila, siguienteColumna)
	Si (posicionY + siguienteFila) < 1 O (posicionY + siguienteFila) > 21 Entonces
		res <- 0;
	SiNo
		res <- siguienteFila;
	FinSi
FinFuncion

// �dem a la anterior
Funcion res <- comprobarDesbordeColumnas(posicionY, posicionX, siguienteFila, siguienteColumna)
	Si (posicionX + siguienteColumna) < 1 O (posicionX + siguienteColumna) > 17 Entonces
		res <- 0;
	SiNo
		res <- siguienteColumna;
	FinSi
FinFuncion


// Por referencia. Actualiza los valores del array "borrando" el contenido de la posici�n que se
// abandona y escribiendo la nueva posici�n. Puesto que implica modificar el array declarado en
// el procedimiento principal, y puesto que en pseudo-c�digo (aparentemente) no existe la posibilidad
// de variables globales, el array debe ser pasado por referencia porque se quiere modificarlo y no
// procesar los datos de una copia.
// NOTA: hace una comprobaci�n de contenido, si la "celda" contiene un color, no "borra" nada.
Funcion hacerMovimiento(tablero, posicionY, posicionX, siguienteFila, siguienteColumna Por Referencia)
	Definir fil, col Como Entero;
	si tablero[posicionY, posicionX] = '| X ' Entonces
		tablero[posicionY, posicionX] <- '|   ';
	FinSi
	fil <- posicionY + siguienteFila;
	col <- posicionX + siguienteColumna;
	tablero[fil, col] <- '| X ';
FinFuncion


// PRINCIPAL.----------------------------------------------------------------------------------------------

Algoritmo maquinaDibujar
	
	// VARIABLES
	Definir lapiz Como Logico; // A falta de mayores indicaciones, l�piz simplemente se usar� como salida del algoritmo.
	Dimension tablero[21, 17]; // Ayuda-Memoria: 21 filas, 17 columnas
	Definir posicionY, posicionX, siguienteFila, siguienteColumna, comando Como Entero;
	
	// Variables menores
	Definir respuesta Como Entero;
	Definir aceptar Como Caracter;
	
	// INICIALIZACI�N
	lapiz <- Verdadero; // Inicializar salida del algoritmo
	
	//Inicializar tablero
	Definir fil, col Como Enteros;
	Para fil <- 1 Hasta 21 Hacer
		Para col <- 1 Hasta 17 Hacer
			tablero[fil, col] <- '|   ';
		FinPara
	FinPara
	
	//Inicializar posiciones dentro del 2D-array
	posicionY <- 1;
	posicionX <- 1;
	siguienteFila <- 0;
	siguienteColumna <- 0;
	tablero[posicionY, posicionX] <- '| X ';
		
	// PROGRAMA.--------------------------------------------------------------
	Repetir
		
		// El algoritmo escribe en pantalla el array, todo de nuevo.
		// Se hace necesario limpiar la pantalla para evitar un efecto papiro.
		Limpiar Pantalla;
		
		// Actualizar tablero
		Para fil <- 1 Hasta 21 Hacer
			Para col <- 1 Hasta 17 Hacer
				Escribir tablero[fil, col] Sin Saltar;
			FinPara
			Escribir '|';
		FinPara
		
		//Men�
		Escribir ""; // Los espacios vac�os se colocan para evitar aglomeramiento visual en pantalla.
		Escribir '1. Arriba';
		Escribir '2. Abajo';
		Escribir '3. Izquierda';
		Escribir '4. Derecha';
		Escribir '5. Pintar';
		Escribir '6. Salir';
		Escribir "";
		Leer comando;
		
		Segun comando Hacer
			1: // ARRIBA
				siguienteFila <- comprobarDesbordeFilas(posicionY, posicionX, -1, siguienteColumna);
				hacerMovimiento(tablero, posicionY, posicionX, siguienteFila, siguienteColumna);
				siguienteFila <- 0;
				posicionY <- posicionY - 1;
			2: // ABAJO
				siguienteFila <- comprobarDesbordeFilas(posicionY, posicionX, 1, siguienteColumna);
				hacerMovimiento(tablero, posicionY, posicionX, siguienteFila, siguienteColumna);
				siguienteFila <- 0;
				posicionY <- posicionY + 1;
			3: // IZQUIERDA
				siguienteColumna <- comprobarDesbordeColumnas(posicionY, posicionX, siguienteFila, -1);
				hacerMovimiento(tablero, posicionY, posicionX, siguienteFila, siguienteColumna);
				siguienteColumna <- 0;
				posicionX <- posicionX - 1;
			4: // DERECHA
				siguienteColumna <- comprobarDesbordeColumnas(posicionY, posicionX, siguienteFila, 1);
				hacerMovimiento(tablero, posicionY, posicionX, siguienteFila, siguienteColumna);
				siguienteColumna <- 0;
				posicionX <- posicionX + 1;
			5:
				Escribir "Elija color: [1] Azul || [2] Rojo";
				Leer respuesta;
				Si respuesta = 1 Entonces
					tablero[posicionY, posicionX] <- '| A ';
				SiNo
					tablero[posicionY, posicionX] <- '| R ';
				FinSi
			6:
				Escribir "�Salir?: [1] S� || [2] No";
				Leer respuesta;
				Si respuesta=1 Entonces
					lapiz <- Falso;
				FinSi
			De Otro Modo:
				Escribir "Comando no reconocido. Intente otra vez";
				Leer aceptar; // En pseudo-c�digo aparentemente no hay pausas. Esto ser�a un reemplazo.
		FinSegun
	
	Hasta Que No lapiz 

FinAlgoritmo
