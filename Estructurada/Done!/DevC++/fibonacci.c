// Fibonacci

/* Gerardo Tordoya */

#include <stdio.h>
#include <stdlib.h>


int main() {
	// Descripción
	printf("\n\nFIBONACCI SERIES\n\n");
	
	// Definir variables
    int i, n, t1 = 0, t2 = 1, nextTerm;
    
    // Entradas e inicialización
    printf("Enter the number of terms: ");
    
    // Escanear "dígito"
    scanf("%d", &n);
    
    // Empieza respuesta
    printf("Fibonacci Series: ");
	
	// t1 = 0, t2 = 1, n = ...
    for (i = 1; i <= n; ++i) {
    	
    	if (i == n) {
    		printf("%d", t1);
		} else {
			printf("%d, ", t1);
		};
		
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
	
	printf("\n\n");
    return 0;
}

