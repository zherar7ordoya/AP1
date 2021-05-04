/* Gerardo Tordoya *\
\*       FSD       */

////////////////////////////////////////////////////////////////////////////////

/*
Calcular el día del año de una determinada fecha (un valor entre 1 y 365 o 366,
si el año es bisiesto).
En Excel, se puede calcular esto así:
    +------+------+-------------+
    |    FECHA    |    DIA #    |
    +------+------+-------------+
    | 11/sep/2020 |     255     |
    +------+------+-------------+
La fórmula en B2 es: =A2-FECHA(AÑO(A2);1;0)

================================================================================

Éste es la adaptación de un ejemplo de la vida real de un programa que se usa en
una entidad financiera. En ambos casos, hace exactamente lo mismo.
Originalmente, fue codificado en estilo espagueti.
Luego, fue refactorizado en estilo estructurado.

*/

////////////////////////////////////////////////////////////////////////////////

/**
 * Retorna por pantalla el día del año del que se desea saber la fecha.
 * EJEMPLO:
 *    function(2020,255);
 *    (retornará 11/sep/2020 como respuesta)
 * 
 * @param {*} year Año a considerar. 
 * @param {*} date Día del año del que se desea saber la fecha.
 */

#include <stdio.h>

int spaghetti_code(int year, int date);

void main() {
	spaghetti_code(2020,255);
}


int spaghetti_code(int year, int date)
{
    int day, month;
    int L;
    if (date < 1 || date > 366 || year < 0)
        return 0;
    if (date <= 31)
        goto JAN;
    L = 1;
    if (year % 400 == 0)
        goto LEAP;
    if (year % 100 == 0)
        goto NOLEAP;
    if (year % 4 == 0)
        goto LEAP;
NOLEAP:
    L = 0;
    if (date > 365)
        return 0;
LEAP:
    if (date > (181 + L))
        goto G181;
    if (date > (90 + L))
        goto G90;
    if (date > (59 + L))
        goto G59;
    month = 2;
    day = date - 31;
    goto OUT;
G59:
    month = 3;
    day = date - (59 + L);
    goto OUT;
G90:
    if (date > 120 + L)
        goto G120;
    month = 4;
    day = date - (90 + L);
    goto OUT;
G120:
    if (date > 151 + L)
        goto G151;
    month = 5;
    day = date - (120 + L);
    goto OUT;
G151:
    month = 6;
    day = date - (151 + L);
    goto OUT;
G181:
    if (date > 273 + L)
        goto G273;
    if (date > 243 + L)
        goto G243;
    if (date > 212 + L)
        goto G212;
    month = 7;
    day = date - (181 + L);
    goto OUT;
G212:
    month = 8;
    day = date - (212 + L);
    goto OUT;
G243:
    month = 9;
    day = date - (243 + L);
    goto OUT;
G273:
    if (date > 334 + L)
        goto G334;
    if (date > 304 + L)
        goto G304;
    month = 10;
    day = date - (273 + L);
    goto OUT;
G304:
    month = 11;
    day = date - (304 + L);
    goto OUT;
G334:
    month = 12;
    day = date - (334 + L);
    goto OUT;
JAN:
    month = 1;
    day = date;
    goto OUT;
OUT:
    printf("day=%d/month=%d", day, month);
    return 0;
}
