
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <locale.h>
#include <string.h>


/*UNA FARMACEUTICA COMERCIALIZA 3 MEDICAMENTOS EN SUS 3 SUCURSALES
SE DESEA SABER :
1. CANTIDAD RECAUDADA POR CADA REMEDIO EN CADA SUCURSAL
2. REMEDIO QUE MENOS VENDIO EN CADA SUCURSAL
3. SUCURSAL DONDE MAS SE RECAUDO
4. NRO. DE PEDIDO DE MAYOR VALOR
5. PORCENTAJE DE CADA SUCURSAL DEL TOTAL
*/

#define SUCURSALES 3
#define SUCURSALES_VENTAS 9
#define REMEDIOS 3
#define N 50

struct datosRemedio {
	
	char nombre [30];
	int precio_unitario;
	char descripcion [50];
	
} ;



int main(int argc, char *argv[]) {
	
	system("color 09");
	
	printf("\t\t********PARCIAL 2**********\t\t");
	printf("\n\n\n\n");

	struct datosRemedio medicamento[3];
	int sucursal [N] = {100, 200, 300};
	int estadisticas [3][3];
	int estadistica = 0;
	int acumulador_total;
	int contador_rem = 0;
	int cantidad = 0;
	int venta_sucursal[N] = {0};
	int pos_minventa;
	int recaudacion = 0;
	int maxima_venta = 0;
	int nro_pedido;
	int sum_100 = 0;
	int sum_200 = 0;
	int sum_300 = 0;
	float porcentaje_100;
	int sum_total = 0;
	float porcentaje_200;
	float porcentaje_300;
	int i,j;
	
	
	
	//Ingresamos los datos de los medicamentos
	strcpy(medicamento[0].nombre, "GRIPE");
	medicamento[0].precio_unitario = 168;
	strcpy(medicamento[0].descripcion, "CONTIENE ASPIRINA");
	
	strcpy(medicamento[1].nombre, "COVID");
	medicamento[1].precio_unitario = 340;
	strcpy(medicamento[1].descripcion, "CONTIENE SARS-II");
	
	strcpy(medicamento[2].nombre, "ANGINAS");
	medicamento[2].precio_unitario = 225;
	strcpy(medicamento[2].descripcion, "CONTIENE CLONAZEPAM");
	
	//MOSTARAMOS LOS MEDICAMENTOS CON UNA ITERACIÓN
	printf("Medicamento\t\t Precio\t\t Descripcion\n\n");
	for( i = 0 ; i < REMEDIOS; i++){
		
		printf("%s\t\t\t %i \t\t %s\n", medicamento[i].nombre, medicamento[i].precio_unitario, medicamento[i].descripcion);
	}

	// CARGO LOS DATOS DE LA SUCURSAL
	printf("\n\nlas sucursales son las siguientes : \n\n");
	for( i = 0 ; i < SUCURSALES; i++){	
	
		printf("%i\t\t\n", sucursal[i]);
	}
	
	//INICIALiZO LA MATRIZ
	for ( i = 0; i < SUCURSALES; i++){
			for( j = 0; j > REMEDIOS; j++){
				estadisticas[i][j] = 0;		
		}
	}
	
	//PROCESo DE carga de cantidad de ventas


	
		
		for ( i = 0; i < SUCURSALES; i++){
		
			acumulador_total = 0;
			
			printf("Sucursal %i :\n", sucursal[i]);
    	
				for( j = 0; j < REMEDIOS; j++){
			
					printf("\nMedicamento %s: \t\n",medicamento[j].nombre);
					printf("Ingrese la cantidad comprada : \n");
					scanf("%d",&cantidad);
					estadisticas [i] [j] = cantidad;
					sum_total += cantidad;
					contador_rem++;
					acumulador_total += estadisticas[i][j];
				
					if(cantidad > *estadisticas[pos_minventa]){
        			pos_minventa = j;
    				}		
    				
    				if( i ==  0 ){
    					sum_100 += cantidad;
					} 
					if(i == 1) {
						sum_200 += cantidad;					
					}
					if (i == 2){
						sum_300 += cantidad;
					}
				}
		}
	
	
	//IMPRIMO LA MATRIZ CON LAS CANTIDADES CARGADAS
	
	for(i = 0; i < SUCURSALES; i++){
	
		for(j = 0; j < REMEDIOS ; j++){
	
			printf("%d\t", estadisticas[i][j]);		
		}
		printf("\n");
	}
	
//1 CANTIDAD RECAUDADA POR CADA REMEDIO EN CADA SUCURSAL

 	for(i = 0; i < SUCURSALES; i++){
	
		
		printf("En la sucursal %i :\n\n",sucursal[i]);
		
		for(j = 0; j < REMEDIOS ; j++){
	
			venta_sucursal [j] +=  estadisticas[i][j];	
			printf("se vendieron %i medicamentos de %s.\n",	venta_sucursal [j], medicamento[j].nombre );
		}
		
	}
	
	
//2. Que remedio vendio menos

	for(i = 0; i < SUCURSALES; i++){
	
		printf("\nEn la sucursal %i :\n",sucursal[i]);

		printf("La cantidad menos vendida fue de %i y corresponde a %s.\n",	estadisticas [j], medicamento[pos_minventa].nombre );

		}
//3. DONDE MAS SE RECAUDO

	for(i = 0; i < SUCURSALES; i++){
	
		for(j = 0; j < REMEDIOS ; j++){
	
			venta_sucursal [j] +=  estadisticas[i][j];	
			recaudacion = venta_sucursal[j]*cantidad;
		
			if (recaudacion > maxima_venta){
				maxima_venta = recaudacion;
			}
			
	
		
		}
			printf("en la sucursal %i se recaudo un total de %i.\n", sucursal[i],maxima_venta );
		
	}

// 4. NRO de pedido de mayor valor

//5.Porcentaje de lo que representa sobre el total
	
		
	porcentaje_100 =  sum_100*sum_total/100;
	porcentaje_200 =  sum_200*sum_total/100;
	porcentaje_300 =  sum_300*sum_total/100;
	

	printf("el porcentanje de la surcursal 100 es %f\n", porcentaje_100 );
	printf("el porcentanje de la surcursal 200 es %f\n", porcentaje_200 );
	printf("el porcentanje de la surcursal 300 es %f\n", porcentaje_300 );

	
	getch();
	return 0;
}
