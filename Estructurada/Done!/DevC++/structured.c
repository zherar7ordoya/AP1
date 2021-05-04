/* Gerardo Tordoya *\
\*       FSD       */

////////////////////////////////////////////////////////////////////////////////

/*
Calcular el d�a del a�o de una determinada fecha (un valor entre 1 y 365 o 366,
si el a�o es bisiesto).
En Excel, se puede calcular esto as�:
    +------+------+-------------+
    |    FECHA    |    DIA #    |
    +------+------+-------------+
    | 11/sep/2020 |     255     |
    +------+------+-------------+
La f�rmula en B2 es: =A2-FECHA(A�O(A2);1;0)

================================================================================

�ste es la adaptaci�n de un ejemplo de la vida real de un programa que se usa en
una entidad financiera. En ambos casos, hace exactamente lo mismo.
Originalmente, fue codificado en estilo espagueti.
Luego, fue refactorizado en estilo estructurado.

*/

////////////////////////////////////////////////////////////////////////////////

/**
 * Retorna por pantalla el d�a del a�o del que se desea saber la fecha.
 * EJEMPLO:
 *    function(2020,255);
 *    (retornar� 11/sep/2020 como respuesta)
 * 
 * @param {*} year A�o a considerar. 
 * @param {*} date D�a del a�o del que se desea saber la fecha.
 */

#include <stdio.h>

void structured_code(int year, int date);

void main() {
	structured_code(2020,255);
}

void structured_code(int year, int date)
{
    int months[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int leap, days, month;
    if ((year % 400 == 0) | ((year % 100) != 0 && (year % 4) == 0))
        leap = 1;
    else
        leap = 0;
    if (year < 1753 || year > 3999 || date <= 0 || date > 365 + leap)
        printf("bad year, date\n");
    else
    {
        days = 0;
        month = 0;
        while (date > days + months[leap][month])
        {
            days = days + months[leap][month];
            month = month + 1;
        }
    }
    printf("\nday = %d/month = %d", date - days, month + 1);
}
