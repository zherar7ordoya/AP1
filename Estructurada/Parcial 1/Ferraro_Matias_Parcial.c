#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>

void pantallaBienvenida(void);
void resolverNivelConMasAlumnos(int,int,int);
int ingresoDeValorINT(int, int);
float ingresoImportePositivo(void);

int main()
{
	setlocale(LC_ALL, "");

	pantallaBienvenida();
	
	long numInscripcion;
	int lengua,nivel,formaPago;
	float importe;
	
	int cantAlumnosNivel1=0, 
		cantAlumnosNivel2=0,
		cantAlumnosNivel3=0;
	
	int cantAlumnosLengua1=0,
		cantAlumnosLengua2=0,
		cantAlumnosLengua3=0,
		cantAlumnosLengua4=0;
		
	float recaudacionFormaPago1=0,
		recaudacionPosibleFormaPago1=0,
		recaudacionFormaPago2=0,
		recaudacionFormaPago3=0,
		recaudacionFormaPago4=0,
		recaudacionFormaPago5=0;
		
	do{
		printf("Ingrese el número de inscripción o 0 para finalizar: ");
		scanf("%ld",&numInscripcion);
		
		if(numInscripcion!=0)
		{
			printf("Ingrese código de lengua:\n 1.Español \n 2.Ingles \n 3.Portugués \n 4.Chino\n ");
			lengua = ingresoDeValorINT(1, 4);
			
			printf("Ingrese código de nivel:\n 1.Básico \n 2.Intermedio \n 3.Avanzado \n");
			nivel = ingresoDeValorINT(1,3);
			
			printf("Ingrese el código de forma de pago: \n 1.Efectivo (Se aplicará descuento) \n 2.Cheque \n 3.Tarjeta debito \n 4.Tarjeta crédito en 1 pago \n 5.Cuotas (Aplica recargo)\n ");
			formaPago = ingresoDeValorINT(1,5);
			
			printf("Ingrese el importe: ");
			importe = ingresoImportePositivo();
		
		//Analisis y procesamiento de datos de entrada
			switch(lengua)
			{
				case 1:
					cantAlumnosLengua1++;
				break;
				case 2:
					cantAlumnosLengua2++;
				break;
				case 3:
					cantAlumnosLengua3++;
				break;
				case 4:
					cantAlumnosLengua4++;
				break;
				default:
					printf("Ha ocurrido un error al procesar la lengua del alumno. Se recomienda volver a iniciar.");
				break;
			}
			
			switch(nivel)
			{
				case 1:
					cantAlumnosNivel1++;
				break;
				case 2:
					cantAlumnosNivel2++;
				break;
				case 3:
					cantAlumnosNivel3++;
				break;
				default:
					printf("Ha ocurrido un error al procesar el nivel del alumno. Se recomienda volver a iniciar.");
				break;
			}
			
			switch(formaPago)
			{
				case 1:
					printf("\nDado que paga en efectivo, se aplica un 10%% de descuento. Importe con descuento: $%.2f. \n", (importe*0.9));
					recaudacionPosibleFormaPago1 += importe;
					recaudacionFormaPago1 += (importe*0.9);
				break;
				case 2:					
					recaudacionFormaPago2 += importe;
				break;
				case 3:
					recaudacionFormaPago3 += importe;
				break;
				case 4:
					recaudacionFormaPago4 += importe;
				break;
				case 5:
					printf("\nDado que paga en cuotas, se aplica un 20%% de recargo. Importe con recargo: $%.2f. \n", (importe*1.2));
					recaudacionFormaPago5 += (importe*1.2);
				break;
				default:
					printf("Ha ocurrido un error al procesar la forma de pago. Se recomienda volver a iniciar.");
				break;
			}
		}
	}while(numInscripcion!=0);
	
	system("cls");
	
	resolverNivelConMasAlumnos(cantAlumnosNivel1,cantAlumnosNivel2,cantAlumnosNivel3);
	printf("\n");
	
	printf("################## LENGUAS ######################\n");
	printf("En la lengua 1 se inscribieron %d alumnos. \n", cantAlumnosLengua1);
	printf("En la lengua 2 se inscribieron %d alumnos. \n", cantAlumnosLengua2);
	printf("En la lengua 3 se inscribieron %d alumnos. \n", cantAlumnosLengua3);
	printf("En la lengua 4 se inscribieron %d alumnos. \n", cantAlumnosLengua4);
	printf("\n");
	
	float recaudacionReal = recaudacionFormaPago1 + recaudacionFormaPago2 + recaudacionFormaPago3 + recaudacionFormaPago4 + recaudacionFormaPago5;

	printf("############### FORMAS DE PAGO ###################\n");
	printf("La forma de pago 1 recaudó $%.2f. \n", recaudacionFormaPago1);
	printf("La forma de pago 2 recaudó $%.2f. \n", recaudacionFormaPago2);
	printf("La forma de pago 3 recaudó $%.2f. \n", recaudacionFormaPago3);
	printf("La forma de pago 4 recaudó $%.2f. \n", recaudacionFormaPago4);
	printf("La forma de pago 5 recaudó $%.2f. \n", recaudacionFormaPago5);
	printf("########## TOTAL RECAUDADO $%.2f ##################\n",recaudacionReal);
	printf("\n");
	
	float recaudacionPosible = recaudacionPosibleFormaPago1 + recaudacionFormaPago2 + recaudacionFormaPago3 + recaudacionFormaPago4 + recaudacionFormaPago5;

	float porcentajeDescuento =0;
	
	if(recaudacionPosibleFormaPago1 > 0)
	{
		porcentajeDescuento = ((recaudacionPosibleFormaPago1*0.1)/recaudacionPosible) * 100;
	}
	
	printf("Si no se aplicara descuento por pago en efectivo se hubiese recaudado $%.2f, es decir, con el descuento se gana un %.2f%% menos. \n", recaudacionPosible, porcentajeDescuento);
	
	int cantidadAlumnos = cantAlumnosNivel1+cantAlumnosNivel2+cantAlumnosNivel3;
	

	if(cantidadAlumnos>0)
	{
		printf("El valor promedio de las inscripciones es: $%.2f. \n", recaudacionReal/(cantidadAlumnos));
	}
	else
	{
		printf("El valor promedio de las inscripciones es: $0. \n");
	}	
}

void resolverNivelConMasAlumnos(int cantAlumnosNivel1, int cantAlumnosNivel2, int cantAlumnosNivel3)
{
	if(cantAlumnosNivel1>=cantAlumnosNivel2)
	{
		if(cantAlumnosNivel1 == cantAlumnosNivel2)
		{
			if(cantAlumnosNivel1 >= cantAlumnosNivel3)
			{
				if(cantAlumnosNivel1 == cantAlumnosNivel3)
				{
					printf("Todos los niveles tienen la misma cantidad de alumnos. Poseen %d alumnos cada uno.\n",cantAlumnosNivel2);
				}
				else
				{
				printf("Los niveles con más alumnos son el 1 y 2, con %d alumnos cada uno.\n",cantAlumnosNivel2);
				}
			}
			else
			{
				printf("El nivel con más alumnos es el 3, con %d alumnos.\n",cantAlumnosNivel3);
			}
		}
		else
		{
			//cantAlumnos1 es mayor a cantAlumnos2
			if(cantAlumnosNivel1 >= cantAlumnosNivel3)
			{
				if(cantAlumnosNivel1 == cantAlumnosNivel3)
				{
						printf("Los niveles con más alumnos son el 1 y 3, con %d alumnos cada uno.\n",cantAlumnosNivel1);
				}
				else
				{
					printf("El nivel con más alumnos es el 1, con %d alumnos.\n",cantAlumnosNivel1);
				}
			}
			else{
				//cantAlumnosNivel3 es mayor a cantAlumnos1
			printf("El nivel con más alumnos es el 3, con %d alumnos.\n",cantAlumnosNivel3);
			}
		}
	}
	else{
		if(cantAlumnosNivel2>=cantAlumnosNivel3)
		{
			if(cantAlumnosNivel2==cantAlumnosNivel3)
			{
				printf("Los niveles con más alumnos son el 2 y 3, con %d alumnos cada uno.\n",cantAlumnosNivel2);
			}
			else
			{
				printf("El nivel con más alumnos es el 2, con %d alumnos.\n",cantAlumnosNivel2);
			}
		}
		else
		{
			printf("El nivel con más alumnos es el 3, con %d alumnos.\n",cantAlumnosNivel3);
		}
	}
}

int ingresoDeValorINT(int valorDesde, int valorHasta)
{
	int intAux=0;
	scanf("%d",&intAux);
	
	if(intAux>=valorDesde && intAux<=valorHasta)
	{
		return intAux;
	}
	else{
		printf("Valor no admitido, ingreselo nuevamente: ");
		return ingresoDeValorINT(valorDesde,valorHasta);
	}
}


float ingresoImportePositivo()
{
	float auxFloat=0;
	
	scanf("%f",&auxFloat);

	if(auxFloat>=0)
	{
		return auxFloat;
	}
	else
	{
		printf("No se puede ingresar valores negativos. Ingrese nuevamente el importe: ");
		
		return ingresoImportePositivo();
	}
}

void pantallaBienvenida()
{
	printf("#############################################################################################\n");
	printf("#############################################################################################\n");
	printf("#############################################################################################\n");
	printf("#############################################################################################\n");
	printf("     ____       _      ____     ____   ___      _      _         _   _         _ \n");
	printf("    |  _ \\     / \\    |  _ \\   / ___| |_ _|    / \\    | |       | \\ | |       / | \n");
	printf("    | |_) |   / _ \\   | |_) | | |      | |    / _ \\   | |       |  \\| |       | | \n");
 	printf("    |  __/   / ___ \\  |  _ <  | |___   | |   / ___ \\  | |___    | |\\  |  _    | | \n");
 	printf("    |_|     /_/   \\_\\ |_| \\_\\  \\____| |___| /_/   \\_\\ |_____|   |_| \\_| (_)   |_| \n");
 	printf("#############################################################################################\n");
	printf("#############################################################################################\n");
	printf("############################## HECHO POR MATIAS FERRARO #####################################\n");
	printf("#############################################################################################\n");
		
	system("pause");
	system("cls"); 
}


