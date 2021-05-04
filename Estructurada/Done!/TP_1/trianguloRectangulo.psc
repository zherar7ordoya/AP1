// EJERCICIO 5 Y 6
// Ingresar 2 lados de un tri�ngulo rect�ngulo.
// Calcular hipotenusa, per�metro y superficie.

Proceso trianguloRectangulo
	
	// Declarar
	Definir uno, dos, hipotenusa, perimetro, superficie Como Real;
	
	// Inicializar
	Escribir 'Ingrese el valor de uno de los lados del �ngulo recto: ';
	Leer uno;
	Escribir 'Ingrese el valor del otro lado del �ngulo recto: ';
	Leer dos;
	
	// Procesar
	hipotenusa <- raiz((uno*uno) + (dos*dos));
	perimetro <- uno + dos + hipotenusa;
	superficie <- (uno * dos) / 2;
	
	// Comunicar
	Escribir 'La hipotenusa del tri�ngulo es ', hipotenusa;
	Escribir 'El per�metro del tri�ngulo es ', perimetro;
	Escribir "La superficie del tri�ngulo es ", superficie;
	
FinProceso
