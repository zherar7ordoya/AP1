#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int vec[12]; //declaro un array  para los meses
	int mes=0;
	int lluvia=0;
	printf("ingresar el mes: ");
	scanf("%d",&mes);
	
	int i=0;
	for(i=0;i<12;i++){
		//inicio el array de meses
		vec[i]=0;
	}
	while (mes!=0){
		
		printf("ingresar la lluvia del mes %d: ",mes);
		scanf("%d",&lluvia);
		vec[mes]=vec[mes]+lluvia; //acumulo la cant de lluvia
		printf("ingresar el mes: ");
		scanf("%d",&mes);
	}
	
	i=0;
	for(i=0;i<12;i++){
		//muestro lo acumulado mes por mes
		printf("Las lluvias del mes %d, fueron %d\n",i,vec[i]); 
	}
	
	
	return 0;
}
