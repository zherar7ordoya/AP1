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
    short sueldo;
};

struct mensual
{
    int mes;
    int legajo;
    const char *nombre;
    short sueldo;
};

struct anual
{
    int legajo;
    const char *nombre;
    int mes;
    int horas_trabajadas;
    short valor_hora;
    short sueldo;
};

/* PROTOTIPOS */
#define VERDADERO 1
#define FALSO 0
#define NO_ENCONTRADO -1
void burbuja_ingenuo(int vector[], int ciclos);
void burbuja_mejorado(int vector[], int ciclos);
int busqueda_lineal(const int a[], int x, int n);
int busqueda_binaria(const int a[], int x, int lim_inf, int lim_sup);
void burbuja_invertido(int a[], int n);
const char *bautizame(int legajo);
void cargar(struct empleado listado[]);
void mostrar(struct empleado empleados[]);
void sueldo_anual_x_empleado(struct empleado empleados[], struct empleado anuales[]);


/* PRINCIPAL */
int main()
{
    // Internacionalización.
    setlocale(LC_ALL, "");

    // Entrada.
    /*
	"color XX": the first X is the background and the second X is the foreground
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

    // Variables generales.
    int loop = 0;
    int temp = 0;
    int acumulador = 0;
    int contador = 0;

    ////////////////////////////////////////////////////////////////////////////

    /*
	Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo
	bubblesort u ordenamiento por burbujeo.
	
	*/
    printf("EJERCICIO 1.=====================================================");
    printf("=======================================================\n\n");

    int vector_e1[20];

    printf("Contenido del vector: \n");
    for (loop = 0; loop < 20; loop++)
    {
        temp = rand() % 150;
        vector_e1[loop] = temp;
        printf("%2d) %3d \t", loop, vector_e1[loop]);
    }

    burbuja_mejorado(vector_e1, 20);
    printf("\n\nVector ordenado: \n");
    for (loop = 0; loop < 20; loop++)
    {
        printf("%2d) %3d \t", loop, vector_e1[loop]);
    }

    printf("\n\n\n");

    ////////////////////////////////////////////////////////////////////////////

    /*
	Cree un programa para ingresar 10 números en un vector y luego que permita 
	introducir un número para realizar una búsqueda. Permita que el operador del 
	programa elija que tipo de algoritmo quiere utilizar por medio de un menú 
	(debe ser búsqueda binaria o secuencial). 
	*/
    printf("EJERCICIO 2.=====================================================");
    printf("=======================================================\n\n");

    int vector_e2[10];
    int nro, metodo, respuesta;

    printf("Contenido del vector: \n");
    for (loop = 0; loop < 10; loop++)
    {
        temp = rand() % 100;
        vector_e2[loop] = temp;
        printf("%2d) %3d \t", loop, vector_e2[loop]);
    }
    printf("\n");

    do
    {
        printf("\n\tNúmero a buscar:\t\t\t");
        scanf("%d", &nro);
        printf("\t0 para lineal || 1 para binaria:\t");
        scanf("%d", &metodo);
    } while (metodo != 0 && metodo != 1);

    if (metodo == 0)
    {
        respuesta = busqueda_lineal(vector_e2, nro, 10);
    }
    else
    {
        burbuja_ingenuo(vector_e2, 10);
        printf("\nOrdenando vector... \n");
        for (loop = 0; loop < 10; loop++)
        {
            printf("%2d) %3d \t", loop, vector_e2[loop]);
        }
        respuesta = busqueda_binaria(vector_e2, nro, 0, 9);
        printf("\n");
    }

    printf("\n\tEl número buscado está en la posición\t%d\n\n\n", respuesta);

    ////////////////////////////////////////////////////////////////////////////

    /*
	Ingresar 15 datos en un vector y ordenarlos de manera descendente. 
	*/
    printf("EJERCICIO 3.=====================================================");
    printf("=======================================================\n\n");

    int vector_e3[15];

    printf("Contenido del vector \n");
    for (loop = 0; loop < 15; loop++)
    {
        temp = rand() % 150;
        vector_e3[loop] = temp;
        printf("%2d) %3d \t", loop, vector_e3[loop]);
    }
    printf("\n\n");

    burbuja_invertido(vector_e3, 15);

    printf("Ordenando vector (en forma descendente)... \n");
    for (loop = 0; loop < 15; loop++)
    {
        printf("%2d) %3d \t", loop, vector_e3[loop]);
    }
    printf("\n\n\n");

    ////////////////////////////////////////////////////////////////////////////

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

    struct empleado empleados[600];
    struct empleado anuales[50];
    short global_sueldos_x_mes[12][2];

	cargar(empleados);
	
	sueldo_anual_x_empleado(empleados, anuales);
	//mostrar(empleados);


    ////////////////////////////////////////////////////////////////////////////

    // Salida.
    printf("\n");
    return 0;
}

/* FUNCIONES */
void burbuja_ingenuo(int a[], int n)
{
    int veces, i, aux;
    for (veces = 1; veces < n; veces++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }
}

void burbuja_mejorado(int a[], int n)
{
    int veces, i, aux, bandera = VERDADERO;
    for (veces = 1; veces < n && bandera; veces++)
    {
        bandera = FALSO;
        for (i = 0; i < n - veces; i++)
        {
            if (a[i] > a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                bandera = VERDADERO;
            }
        }
    }
}

int busqueda_lineal(const int a[], int x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            return i;
    }
    return NO_ENCONTRADO;
}

int busqueda_binaria(const int a[], int x, int lim_inf, int lim_sup)
{
    int medio;
    while (lim_inf <= lim_sup)
    {
        medio = (lim_inf + lim_sup) / 2;
        if (x == a[medio])
        {
            return medio;
        }
        else if (x < a[medio])
        {
            lim_sup = medio - 1;
        }
        else
        {
            lim_inf = medio + 1;
        }
    }
    return NO_ENCONTRADO;
}

void burbuja_invertido(int a[], int n)
{
    int veces, i, aux, bandera = VERDADERO;
    for (veces = 1; veces < n && bandera; veces++)
    {
        bandera = FALSO;
        for (i = 0; i < n - veces; i++)
        {
            if (a[i] < a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                bandera = VERDADERO;
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
        return "**** ERROR ****       ";
    }
}

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




void sueldo_anual_x_empleado(struct empleado empleados[], struct empleado anuales[])
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
	mostrar(anuales);
}













void mostrar(struct empleado empleados[]) {
	int loop;
    printf("LEG \tNOMBRE Y APELLIDO \t\tMS \t HT \t  VH \tSUELDO\n\n");
    for (loop = 0; loop < 600; loop++)
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

