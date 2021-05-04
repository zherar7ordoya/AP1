////////////////////////////////////////////////////////////////////////////////
//                                              UAI     Analista Programador  //
//                                              Estructurada (Comisión 1-ON)  //
//                                              XXX XXX XXX XXXX XXX XXX XXX  //
//                                              Tordoya, Gerardo    XXX-2020  //
////////////////////////////////////////////////////////////////////////////////

// Base.
#include <stdio.h>
#include <stdlib.h>

// Internacionalización.
#include <wchar.h>
#include <locale.h>

// Específicas.
#include <math.h>

////////////////////////////////////////////////////////////////////////////////

struct student
{
    int rollno;
    const char *name;
    int marks;
};

/* PROTOTIPOS */
void accept(struct student list[], int s);
void display(struct student list[], int s);
void bsortDesc(struct student list[], int s);

const char *bautizame(int legajo);

/* PRINCIPAL */
int main()
{
    // Internacionalización.
    setlocale(LC_ALL, "");

    // Entrada.
    system("color 06");
    printf("\n\n");
    printf("Welcome to the Jaguar House...");
    printf("\n\n");

    // Variables + Inicialización.
    struct student data[20];
    int n;

    // Procedimientos.
    printf("Number of records you want to enter?: ");
    scanf("%d", &n);

    accept(data, n);
    printf("\nBefore sorting");
    display(data, n);
    bsortDesc(data, n);
    printf("\nAfter sorting");
    display(data, n);

    // Salida.
    printf("\n");
    return 0;
}

/* FUNCIONES */
void accept(struct student list[80], int s)
{
    int i;
   
    for (i = 0; i < s; i++)
    {

        printf("\nEnter data for Record #%d", i + 1);

        printf("Enter rollno (legajo): ");
        scanf("%d", &list[i].rollno);

        printf("Enter marks: ");
        scanf("%d", &list[i].marks);
        
        getchar();
        printf("\nEnter name: ");
        list[i].name = bautizame(list[i].rollno);
    }
}

void display(struct student list[80], int s)
{
    int i;

    printf("\n\nRollno\tName\tMarks\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", list[i].rollno, list[i].name, list[i].marks);
    }
}

void bsortDesc(struct student list[80], int s)
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

const char *bautizame(int legajo)
{
    switch (legajo)
    {
    case 1:
        return "Adam Driver";
        break;
    case 2:
        return "Adrien Brody";
        break;
    case 3:
        return "Al Pacino";
        break;
    case 4:
        return "Andrew Garfield";
        break;
    case 5:
        return "Anthony Hopkins";
        break;
    case 6:
        return "Antonio Banderas";
        break;
    case 7:
        return "Ben Kingsley";
        break;
    case 8:
        return "Benedict Cumberbatch";
        break;
    case 9:
        return "Bill Murray";
        break;
    case 10:
        return "Billy Bob Thornton";
        break;
    case 11:
        return "Brad Pitt";
        break;
    case 12:
        return "Bradley Cooper";
        break;
    case 13:
        return "Bruce Dern";
        break;
    case 14:
        return "Bryan Cranston";
        break;
    case 15:
        return "Casey Affleck";
        break;
    case 16:
        return "Chiwetel Ejiofor";
        break;
    case 17:
        return "Christian Bale";
        break;
    case 18:
        return "Clint Eastwood";
        break;
    case 19:
        return "Colin Firth";
        break;
    case 20:
        return "Daniel Day-Lewis";
        break;
    case 21:
        return "Daniel Kaluuya";
        break;
    case 22:
        return "David Strathairn";
        break;
    case 23:
        return "Demián Bichir";
        break;
    case 24:
        return "Denzel Washington";
        break;
    case 25:
        return "Don Cheadle";
        break;
    case 26:
        return "Dustin Hoffman";
        break;
    case 27:
        return "Ed Harris";
        break;
    case 28:
        return "Eddie Redmayne";
        break;
    case 29:
        return "Edward Norton";
        break;
    case 30:
        return "Forest Whitaker";
        break;
    case 31:
        return "Frank Langella";
        break;
    case 32:
        return "Gary Oldman";
        break;
    case 33:
        return "Geoffrey Rush";
        break;
    case 34:
        return "George Clooney";
        break;
    case 35:
        return "Gérard Depardieu";
        break;
    case 36:
        return "Heath Ledger";
        break;
    case 37:
        return "Hugh Jackman";
        break;
    case 38:
        return "Ian McKellen";
        break;
    case 39:
        return "Jack Nicholson";
        break;
    case 40:
        return "James Franco";
        break;
    case 41:
        return "Jamie Foxx";
        break;
    case 42:
        return "Javier Bardem";
        break;
    case 43:
        return "Jean Dujardin";
        break;
    case 44:
        return "Jeff Bridges";
        break;
    case 45:
        return "Jeremy Irons";
        break;
    case 46:
        return "Jeremy Renner";
        break;
    case 47:
        return "Jesse Eisenberg";
        break;
    case 48:
        return "Joaquin Phoenix";
        break;
    case 49:
        return "Joaquín Phoenix";
        break;
    case 50:
        return "John Travolta";
        break;
    case 51:
        return "Johnny Depp";
        break;
    case 52:
        return "Jonathan Pryce";
        break;
    case 53:
        return "Jude Law";
        break;
    case 54:
        return "Kevin Costner";
        break;
    case 55:
        return "Kevin Spacey";
        break;
    case 56:
        return "Laurence Fishburne";
        break;
    case 57:
        return "Leonardo DiCaprio";
        break;
    case 58:
        return "Liam Neeson";
        break;
    case 59:
        return "Massimo Troisi";
        break;
    case 60:
        return "Matt Damon";
        break;
    case 61:
        return "Matthew McConaughey";
        break;
    case 62:
        return "Michael Caine";
        break;
    case 63:
        return "Michael Fassbender";
        break;
    case 64:
        return "Michael Keaton";
        break;
    case 65:
        return "Mickey Rourke";
        break;
    case 66:
        return "Morgan Freeman";
        break;
    case 67:
        return "Nick Nolte";
        break;
    case 68:
        return "Nicolas Cage";
        break;
    case 69:
        return "Nigel Hawthorne";
        break;
    case 70:
        return "Paul Newman";
        break;
    case 71:
        return "Peter Fonda";
        break;
    case 72:
        return "Peter O'Toole";
        break;
    case 73:
        return "Philip Seymour Hoffman";
        break;
    case 74:
        return "Ralph Fiennes";
        break;
    case 75:
        return "Rami Malek";
        break;
    case 76:
        return "Richard Dreyfuss";
        break;
    case 77:
        return "Richard Farnsworth";
        break;
    case 78:
        return "Richard Harris";
        break;
    case 79:
        return "Richard Jenkins";
        break;
    case 80:
        return "Robert De Niro";
        break;
    case 81:
        return "Robert Downey Jr.";
        break;
    case 82:
        return "Robert Duvall";
        break;
    case 83:
        return "Roberto Benigni";
        break;
    case 84:
        return "Robin Williams";
        break;
    case 85:
        return "Russell Crowe";
        break;
    case 86:
        return "Ryan Gosling";
        break;
    case 87:
        return "Sean Penn";
        break;
    case 88:
        return "Stephen Rea";
        break;
    case 89:
        return "Steve Carell";
        break;
    case 90:
        return "Terrence Howard";
        break;
    case 91:
        return "Timothée Chalamet";
        break;
    case 92:
        return "Tom Cruise";
        break;
    case 93:
        return "Tom Hanks";
        break;
    case 94:
        return "Tom Wilkinson";
        break;
    case 95:
        return "Tommy Lee Jones";
        break;
    case 96:
        return "Viggo Mortensen";
        break;
    case 97:
        return "Warren Beatty";
        break;
    case 98:
        return "Will Smith";
        break;
    case 99:
        return "Willem Dafoe";
        break;
    case 100:
        return "Woody Harrelson";
        break;
    default:
        return "ERROR";
    }
}
