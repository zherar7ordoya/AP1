#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int cantidadVendida[10];
	int totalVendido[10];
	int codProducto=0;
	int importe=0;
	int i=0;
	for(i=0;i<10;i++){ //inicializo los arrays
		cantidadVendida[i]=0;
		totalVendido[i]=0;
	}
		
	printf("Ingrese código de producto: ");
	scanf("%d",&codProducto);
	while(codProducto!=0){
		printf("Ingrese importe de la venta: ");
		scanf("%d",&importe);
		
		cantidadVendida[codProducto]++;   //sumo uno a la cantidad vendida
		totalVendido[codProducto]+=importe; //acumulo el total vendido
		 
		printf("Ingrese código de producto: ");
		scanf("%d",&codProducto);
	}
	
	for(i=0;i<10;i++){ //inicializo los arrays
		printf("Para el producto %d se vendieron %d unidades por un total de %d\n",i,cantidadVendida[i],totalVendido[i]);
	}
	
	
	
	
	return 0;
}
