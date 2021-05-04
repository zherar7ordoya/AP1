Algoritmo parcial_1_2020
	
	Definir modalidad, costo, horas, total, verifica Como Entero;
	
	modalidad <- 0;
	modalidad <- 0;
	modalidad <- 0;
	modalidad <- 0;
	verifica <- 0;
	
	Repetir
		
		Escribir "Ingrese modalidad (1 semanal o 2 fin de semana): " Sin Saltar;
		Leer modalidad;
		
		Escribir "Ingrese costo de la hora: " Sin Saltar;
		Leer costo;
		
		Escribir "Ingrese horas contratadas: " Sin Saltar;
		Leer horas;
		
		Escribir "****************************************************";
		
		Si (modalidad = 1) Entonces
			Si (costo = 50) Entonces
				total <- ( horas - Trunc(horas/2) ) * costo;
				Escribir "Horas contratadas: ", horas;
				Escribir "Horas bonificadas: ", Trunc(horas/2);
				Escribir "Horas a cobrar: ", horas - Trunc(horas/2);
				Escribir "Total a cobrar: ", total;
				verifica <- 1;
			SiNo
				Escribir "Verifique valores ingresados";
				verifica <- 0;
				Escribir "****************************************************";
			FinSi
		SiNo
			Si (costo = 50 * 1.3) Entonces
				total <- ( horas - Trunc(horas/2) ) * costo;
				Escribir "Horas contratadas: ", horas;
				Escribir "Horas bonificadas: ", Trunc(horas/2);
				Escribir "Horas a cobrar: ", horas - Trunc(horas/2);
				Escribir "Total a cobrar: ", total;
				verifica <- 1;
			SiNo
				Escribir "Verifique valores ingresados";
				verifica <- 0;
				Escribir "****************************************************";
			FinSi
		FinSi
		
	Hasta Que (verifica = 1)
	
FinAlgoritmo
