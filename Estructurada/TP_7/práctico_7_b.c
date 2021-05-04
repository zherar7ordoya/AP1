////////////////////////////////////////////////////////////////////////////////
//                                              UAI     Analista Programador  //
//                                              Estructurada (Comisión 1-ON)  //
//                                              TRABAJO PRÁCTICO       NRO 7  //
//                                              Tordoya, Gerardo    OCT-2020  //
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

// Específicas.
#include <math.h>
#include <time.h>

////////////////////////////////////////////////////////////////////////////////

struct empleado
{
    int legajo;
    const char *nombre;
    int mes;
    int horas_trabajadas;
    short valor_hora;
    unsigned short sueldo;
};

void cargar(struct empleado listado[]);
const char *bautizame(int legajo);
void mostrar_struct(struct empleado empleados[], int registros);
int contar_activos(struct empleado empleados[]);
void calcular_anuales(struct empleado empleados[], struct empleado anuales[]);
void calcular_mensuales(struct empleado empleados[], long sueldos_mensuales[][2]);
void mostrar_mensuales(long matriz[][2]);
void calcular_maximos(struct empleado empleados[], long matriz[][2]);
void mostrar_maximos(long matriz[][2]);
void calcular_porcentajes(struct empleado anuales[], int registros, float porcentajes[][2]);
void mostrar_porcentajes(float matriz[][2], int registros);


////////////////////////////////////////////////////////////////////////////////

int main()
{
    setlocale(LC_ALL, "");

    /*
	"color XX": the first X for background and the second X for foreground.
		0 = Black   8 = Gray
		1 = Blue    9 = Light Blue
		2 = Green   A = Light Green
		3 = Aqua    B = Light Aqua
		4 = Red     C = Light Red
		5 = Purple  D = Light Purple
		6 = Yellow  E = Light Yellow
		7 = White   F = Bright White
	*/

    system("color 06");
    printf("\n\n\n \t\t\t \t\t\t      PRÁCTICO 6 \n\n\n");

    /*
	Una  empresa  desea  analizar  los  sueldos  a  sus 50  empleados  durante
	el  año,  para  ello conoce:                               [ 50 * 12 = 600 ]
		a.  Legajo del empleado                                       [ 1 / 50 ]
		b.  Cantidad de horas trabajadas                             [ 0 / 220 ]
		c.  Valor de la hora                                        [ $7 / $27 ]
		d.  Mes                                                       [ 1 / 12 ]
	En un vector en memoria se deben cargar los nombres de los empleados, se
	desea saber:                                                      [ STRING ]
		a.  sueldo anual de cada empleado 
		b.  total de sueldos pagados  cada mes 
		c.  máximo sueldo pagado cada mes y a quién pertenece 
		d.  porcentaje que representa cada sueldo anual sobre el total 
		e.  nombre del empleado que cobró más en el primer semestre 
		f.  cantidad de meses en que el total de sueldos superó los $100.000 
		g.  imprimir ordenado en forma descendente por sueldo anual de cada
			empleado:
			1.  Legajo 
			2.  Nombre 
			3.  Sueldo anual de cada empleado 
	*/

    printf("EJERCICIO 4.=====================================================");
    printf("=======================================================\n\n");

    // PRELIMINAR
	struct empleado empleados[600] = {0};
   	cargar(empleados);
    int activos;
    activos = contar_activos(empleados);
	
	// PUNTO A
	printf("a) sueldo anual de cada empleado:\n\n");
	struct empleado anuales[activos];
    calcular_anuales(empleados, anuales);
    mostrar_struct(anuales, activos);       //////// CORREGIR SALIDA (RESUMIDA / COMPLETA) ********
    
    // PUNTO B
    printf("\n\nb) total de sueldos pagados cada mes:\n\n");
	long sueldos_mensuales[12][2];
    calcular_mensuales(empleados, sueldos_mensuales);
    mostrar_mensuales(sueldos_mensuales);
    
    // PUNTO C
    printf("\n\nc) máximo sueldo pagado cada mes y a quién pertenece:\n\n");
    long sueldos_maximos[12][2];
    calcular_maximos(empleados, sueldos_maximos);
    mostrar_maximos(sueldos_maximos);
    
    // PUNTO D
    printf("\n\nd) porcentaje que representa cada sueldo anual sobre el total:\n\n");
	float sueldos_porcentajes[12][2];
	calcular_porcentajes(anuales, activos, sueldos_porcentajes);
	mostrar_porcentajes(sueldos_porcentajes, activos);
	
	// PUNTO E
    printf("\n\ne) nombre del empleado que cobró más en el primer semestre:\n\n");
	
	
	    
    // FINALE
    return 0;
}


//////////////////////////////////////////////////////////////////// [FUNCIONES]

/*
void ordenar(struct empleado listado[], int ctd)
{
    int i, j;
    struct student temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1 - i); j++)
        {
            if (list[j].marks < list[j + 1].marks)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}
*/

////////////////////////////////////////////////////////////////////// [PUNTO E]


////////////////////////////////////////////////////////////////////// [PUNTO D]

void mostrar_porcentajes(float matriz[][2], int registros)
{
	int loop;
	printf(" LEG\t NOMBRE Y APELLIDO\t PORCENTUAL\n\n");
	for (loop = 0; loop < registros; loop++)
	{
		printf(" %3d\t %s\t   %2.2f %% \n", (int)matriz[loop][0], bautizame(matriz[loop][0]), matriz[loop][1]);
	}
}

void calcular_porcentajes(struct empleado anuales[], int registros, float porcentajes[][2])
{
	long total = 0;
	int iter;
	
	for (iter = 0; iter < registros; iter++)
	{
		total += anuales[iter].sueldo;
	}
	
	for (iter = 0; iter < registros; iter++)
	{
		porcentajes[iter][0] = anuales[iter].legajo;
		porcentajes[iter][1] = (float)anuales[iter].sueldo / total * 100;
	}
	
	printf(" ********* Total Sueldos $%d ********* \n\n", total);
}

////////////////////////////////////////////////////////////////////// [PUNTO C]

void mostrar_maximos(long matriz[][2])
{
	int loop;
	printf(" MES\t NOMBRE Y APELLIDO\t SUELDO\n\n");
	for (loop = 0; loop < 12; loop++)
	{
		printf(" %2d\t %s\t $ %4d \n", matriz[loop][0], bautizame(matriz[loop][0]), matriz[loop][1]);
	}
}

void calcular_maximos(struct empleado empleados[], long sueldos_maximos[][2])
{
	int af, ad;
	
	for (af = 0; af < 12; af++)
	{
		sueldos_maximos[af][0] = af + 1;
		sueldos_maximos[af][1] = 0;
		
		for (ad = 0; ad < 600; ad++)
		{
			if (sueldos_maximos[af][0] == empleados[ad].mes)
			{
				if (sueldos_maximos[af][1] < empleados[ad].sueldo)
				{
					sueldos_maximos[af][1] = empleados[ad].sueldo;
				}
			}
		}
	}
}


////////////////////////////////////////////////////////////////////// [PUNTO B]

void mostrar_mensuales(long matriz[][2])
{
	int loop;
	printf(" MES\tTOTAL SUELDOS\n\n");
	for (loop = 0; loop < 12; loop++)
	{
		printf(" %2d \t $ %6d \n", matriz[loop][0], matriz[loop][1]);
	}
}


void calcular_mensuales(struct empleado empleados[], long sueldos_mensuales[][2])
{
	int af, ad;
	
	for (af = 0; af < 12; af++)
	{
		sueldos_mensuales[af][0] = af + 1;
		
		for (ad = 0; ad < 600; ad++)
		{
			if (sueldos_mensuales[af][0] == empleados[ad].mes)
			{
				sueldos_mensuales[af][1] += empleados[ad].sueldo;
			}
		}
	}
}

////////////////////////////////////////////////////////////////////// [PUNTO A]

void mostrar_struct(struct empleado empleados[], int registros)
{
    int loop;

    printf("LEG \tNOMBRE Y APELLIDO \t\tMS \t HT \t  VH \tSUELDO\n\n");
    for (loop = 0; loop < registros; loop++)
    {
        printf("%3d  \t%s  \t%2d  \t%3d  \t%4d  \t$ %4d \n",
               empleados[loop].legajo,
               empleados[loop].nombre,
               empleados[loop].mes,
               empleados[loop].horas_trabajadas,
               empleados[loop].valor_hora,
               empleados[loop].sueldo);
    }
}

void calcular_anuales(struct empleado empleados[], struct empleado anuales[])
{
    int ite, ita, aux = 0;

    for (ite = 0; ite < 600; ite++)
    {
        if (ite == 0)
        {
            anuales[aux] = empleados[ite];
        }
        else
        {
            for (ita = 0; ita <= aux; ita++)
            {
                if (empleados[ite].legajo == anuales[ita].legajo)
                {
                    anuales[ita].sueldo += empleados[ite].sueldo;
                    break;
                }
                if (ita == aux)
                {
                    aux++;
                    anuales[aux] = empleados[ite];
                    break;
                }
            }
        }
   
}
}

int contar_activos(struct empleado empleados[])
{
    int itex, itin, contador = 0;

    for (itex = 1; itex < 101; itex++)
    {
        for (itin = 0; itin < 600; itin++)
        {
            if (empleados[itin].legajo != 0 && empleados[itin].legajo == itex)
            {
                contador++;
                break;
            }
        }
    }
    return contador;
}

///////////////////////////////////////////////////////////// [CARGA AUTOMÁTICA]

void cargar(struct empleado empleados[])
{
    int loop, upper, lower, itr, aux;
    srand(time(NULL));

    for (itr = 0; itr < 12; itr++)
    {
        if (itr == 0)
        {
            for (loop = 0; loop < 50; loop++)
            {
                lower = 1;
                upper = 100;
                empleados[loop].legajo = (rand() % (upper - lower + 1)) + lower;
                empleados[loop].nombre = bautizame(empleados[loop].legajo);
                empleados[loop].mes = itr + 1;
                lower = 0;
                upper = 220;
                empleados[loop].horas_trabajadas = (rand() % (upper - lower + 1)) + lower;
                lower = 7;
                upper = 27;
                empleados[loop].valor_hora = (rand() % (upper - lower + 1)) + lower;
                empleados[loop].sueldo = empleados[loop].horas_trabajadas * empleados[loop].valor_hora;
            }
        }
        else
        {
            aux = 0;

            for (loop = 0; loop < 50; loop++)
            {
                lower = 1;
                upper = 100;
                empleados[loop + (50 * itr)].legajo = empleados[aux].legajo;
                empleados[loop + (50 * itr)].nombre = empleados[aux].nombre;
                empleados[loop + (50 * itr)].mes = itr + 1;
                lower = 0;
                upper = 220;
                empleados[loop + (50 * itr)].horas_trabajadas = (rand() % (upper - lower + 1)) + lower;
                lower = 7;
                upper = 27;
                empleados[loop + (50 * itr)].valor_hora = (rand() % (upper - lower + 1)) + lower;
                empleados[loop + (50 * itr)].sueldo = empleados[loop + (50 * itr)].horas_trabajadas * empleados[loop + (50 * itr)].valor_hora;
                aux++;
            }
        }
    }
}

const char *bautizame(int legajo)
{
    switch (legajo)
    {
    case 1:
        return "Adam Driver           ";
        break;
    case 2:
        return "Adrien Brody          ";
        break;
    case 3:
        return "Al Pacino             ";
        break;
    case 4:
        return "Andrew Garfield       ";
        break;
    case 5:
        return "Anthony Hopkins       ";
        break;
    case 6:
        return "Antonio Banderas      ";
        break;
    case 7:
        return "Ben Kingsley          ";
        break;
    case 8:
        return "Benedict Cumberbatch  ";
        break;
    case 9:
        return "Bill Murray           ";
        break;
    case 10:
        return "Billy Bob Thornton    ";
        break;
    case 11:
        return "Brad Pitt             ";
        break;
    case 12:
        return "Bradley Cooper        ";
        break;
    case 13:
        return "Bruce Dern            ";
        break;
    case 14:
        return "Bryan Cranston        ";
        break;
    case 15:
        return "Casey Affleck         ";
        break;
    case 16:
        return "Chiwetel Ejiofor      ";
        break;
    case 17:
        return "Christian Bale        ";
        break;
    case 18:
        return "Clint Eastwood        ";
        break;
    case 19:
        return "Colin Firth           ";
        break;
    case 20:
        return "Daniel Day-Lewis      ";
        break;
    case 21:
        return "Daniel Kaluuya        ";
        break;
    case 22:
        return "David Strathairn      ";
        break;
    case 23:
        return "Demián Bichir         ";
        break;
    case 24:
        return "Denzel Washington     ";
        break;
    case 25:
        return "Don Cheadle           ";
        break;
    case 26:
        return "Dustin Hoffman        ";
        break;
    case 27:
        return "Ed Harris             ";
        break;
    case 28:
        return "Eddie Redmayne        ";
        break;
    case 29:
        return "Edward Norton         ";
        break;
    case 30:
        return "Forest Whitaker       ";
        break;
    case 31:
        return "Frank Langella        ";
        break;
    case 32:
        return "Gary Oldman           ";
        break;
    case 33:
        return "Geoffrey Rush         ";
        break;
    case 34:
        return "George Clooney        ";
        break;
    case 35:
        return "Gérard Depardieu      ";
        break;
    case 36:
        return "Heath Ledger          ";
        break;
    case 37:
        return "Hugh Jackman          ";
        break;
    case 38:
        return "Ian McKellen          ";
        break;
    case 39:
        return "Jack Nicholson        ";
        break;
    case 40:
        return "James Franco          ";
        break;
    case 41:
        return "Jamie Foxx            ";
        break;
    case 42:
        return "Javier Bardem         ";
        break;
    case 43:
        return "Jean Dujardin         ";
        break;
    case 44:
        return "Jeff Bridges          ";
        break;
    case 45:
        return "Jeremy Irons          ";
        break;
    case 46:
        return "Jeremy Renner         ";
        break;
    case 47:
        return "Jesse Eisenberg       ";
        break;
    case 48:
        return "Joaquin Phoenix       ";
        break;
    case 49:
        return "Joaquín Phoenix       ";
        break;
    case 50:
        return "John Travolta         ";
        break;
    case 51:
        return "Johnny Depp           ";
        break;
    case 52:
        return "Jonathan Pryce        ";
        break;
    case 53:
        return "Jude Law              ";
        break;
    case 54:
        return "Kevin Costner         ";
        break;
    case 55:
        return "Kevin Spacey          ";
        break;
    case 56:
        return "Laurence Fishburne    ";
        break;
    case 57:
        return "Leonardo DiCaprio     ";
        break;
    case 58:
        return "Liam Neeson           ";
        break;
    case 59:
        return "Massimo Troisi        ";
        break;
    case 60:
        return "Matt Damon            ";
        break;
    case 61:
        return "Matthew McConaughey   ";
        break;
    case 62:
        return "Michael Caine         ";
        break;
    case 63:
        return "Michael Fassbender    ";
        break;
    case 64:
        return "Michael Keaton        ";
        break;
    case 65:
        return "Mickey Rourke         ";
        break;
    case 66:
        return "Morgan Freeman        ";
        break;
    case 67:
        return "Nick Nolte            ";
        break;
    case 68:
        return "Nicolas Cage          ";
        break;
    case 69:
        return "Nigel Hawthorne       ";
        break;
    case 70:
        return "Paul Newman           ";
        break;
    case 71:
        return "Peter Fonda           ";
        break;
    case 72:
        return "Peter O'Toole         ";
        break;
    case 73:
        return "Philip Seymour Hoffman";
        break;
    case 74:
        return "Ralph Fiennes         ";
        break;
    case 75:
        return "Rami Malek            ";
        break;
    case 76:
        return "Richard Dreyfuss      ";
        break;
    case 77:
        return "Richard Farnsworth    ";
        break;
    case 78:
        return "Richard Harris        ";
        break;
    case 79:
        return "Richard Jenkins       ";
        break;
    case 80:
        return "Robert De Niro        ";
        break;
    case 81:
        return "Robert Downey Jr.     ";
        break;
    case 82:
        return "Robert Duvall         ";
        break;
    case 83:
        return "Roberto Benigni       ";
        break;
    case 84:
        return "Robin Williams        ";
        break;
    case 85:
        return "Russell Crowe         ";
        break;
    case 86:
        return "Ryan Gosling          ";
        break;
    case 87:
        return "Sean Penn             ";
        break;
    case 88:
        return "Stephen Rea           ";
        break;
    case 89:
        return "Steve Carell          ";
        break;
    case 90:
        return "Terrence Howard       ";
        break;
    case 91:
        return "Timothée Chalamet     ";
        break;
    case 92:
        return "Tom Cruise            ";
        break;
    case 93:
        return "Tom Hanks             ";
        break;
    case 94:
        return "Tom Wilkinson         ";
        break;
    case 95:
        return "Tommy Lee Jones       ";
        break;
    case 96:
        return "Viggo Mortensen       ";
        break;
    case 97:
        return "Warren Beatty         ";
        break;
    case 98:
        return "Will Smith            ";
        break;
    case 99:
        return "Willem Dafoe          ";
        break;
    case 100:
        return "Woody Harrelson       ";
        break;
    default:
        return "/////// ERROR! ///////";
    }
}
