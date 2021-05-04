#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//declaramos e inicializamos las variables
	int nroFact=0;
	int nroVendedor=0;
	int importe=0;	
	int ventasPorVendedor[5];
	int comisionesPorVendedor[5];
	int cantidadFacturas=0;
	int totalFacturas=0;
	int i=0;
	
	
	//inicializo los vectores
	for(i=0;i<5;i++){
		ventasPorVendedor[i]=0;
		comisionesPorVendedor[i]=0;
	}
	
	printf("Ingrese el nro de factura: ");
	scanf("%d",&nroFact);
	
	while (nroFact!=0){
		//entrada de datos
		printf("Ingrese el nro de vendedor: ");
		scanf("%d",&nroVendedor);
		printf("Ingrese el importe de la factura: ");
		scanf("%d",&importe);
			
	
		ventasPorVendedor[nroVendedor]+=importe;  //acumulo el total por vendedor
		comisionesPorVendedor[nroVendedor]+=(importe*0.1); //calculo y acumulo la comisión por vendedor
		cantidadFacturas++; //sumo la cantidad de facturas procesadas
		totalFacturas+=importe; //acumulo el tota lde las facturas
	
	
		printf("Ingrese el nro de factura: ");
		scanf("%d",&nroFact);
	}
	
	
	//salida de datos
	// punto 1
	printf("La caja del día es %d\n",totalFacturas);
	
	
	// punto 2
	for(i=0;i<5;i++){
		printf("Las comisiones del vendedor %d es %d\n",i,comisionesPorVendedor[i]);	
	}
	
	//punto 3	
	for(i=0;i<5;i++){
		int porcentual=0;
		if (totalFacturas>0){
			porcentual=(ventasPorVendedor[i]*100)/totalFacturas;
		}
		printf("El porcentual de la caja del vendedor %d es %d\n",i,porcentual);		
	}
	
	//punto 4
	
	if (cantidadFacturas>0){
			printf("El valor promedio de las facturas es %d\n",totalFacturas/cantidadFacturas);	
	}
			
	return 0;
}
