// EJERCICIO 5 Y 6
// Ingresar 2 lados de un triángulo rectángulo.
// Calcular hipotenusa, perímetro y superficie.

Proceso trianguloRectangulo
	
	// Declarar
	Definir uno, dos, hipotenusa, perimetro, superficie Como Real;
	
	// Inicializar
	Escribir 'Ingrese el valor de uno de los lados del ángulo recto: ';
	Leer uno;
	Escribir 'Ingrese el valor del otro lado del ángulo recto: ';
	Leer dos;
	
	// Procesar
	hipotenusa <- raiz((uno*uno) + (dos*dos));
	perimetro <- uno + dos + hipotenusa;
	superficie <- (uno * dos) / 2;
	
	// Comunicar
	Escribir 'La hipotenusa del triángulo es ', hipotenusa;
	Escribir 'El perímetro del triángulo es ', perimetro;
	Escribir "La superficie del triángulo es ", superficie;
	
FinProceso
