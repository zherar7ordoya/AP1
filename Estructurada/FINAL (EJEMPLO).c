#include <stdio.h>

void xValor(int parametro) { parametro++; };
void xReferencia(int* parametro) { (*parametro)++; };

int main() {
	int variable = 9;
	
	xValor(variable);
  	printf("%d\n",variable); // Pantalla: 9
  	
	xReferencia(&variable);
  	printf("%d\n",variable); // Pantalla: 10

	return 0;
}

