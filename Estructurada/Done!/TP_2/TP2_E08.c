
/* GERARDO TORDOYA *\
\*       FSD       */

#include<stdio.h>

/* UAI - P Estructurada */
/* TRABAJO PRÁCTICO 2 */
/* Gerardo Tordoya */
/* 2020-09-09 */
/* ---------- */

int main() {
	// PLANTEO DEL EJERCICIO
	printf("Ingresar la edad y la altura de dos personas,\n");
	printf("indicar e imprimir la estatura del de mayor edad\n");
	
	/* Variables */
	float dosaltura;
	int dosedad;
	float unoaltura;
	int unoedad;

	/* Inicialización */
	printf("1ra persona: ¿edad?\n");
	scanf("%i",&unoedad);
	printf("1ra persona: ¿altura?\n");
	scanf("%f",&unoaltura);
	printf("2da persona: ¿edad?\n");
	scanf("%i",&dosedad);
	printf("2da persona: ¿altura?\n");
	scanf("%f",&dosaltura);
	
	/* Operaciones */
	if ((unoedad>dosedad)) {
		printf("Altura 1ra persona: %f\n",unoaltura);
	} else {
		if ((unoedad<dosedad)) {
			printf("Altura 2da persona: %f\n",dosaltura);
		}
	}

	/* Finalización */
	getchar();
	return 0;
}

