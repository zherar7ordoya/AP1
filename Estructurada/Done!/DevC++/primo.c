
/* Gerardo Tordoya */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	printf("\n\nVERIFICAR NRO PRIMO\n\n");
	
	 int n, i, count = 0;
 
    printf("Ingrese el nro a verificar: ");
    scanf("%d",&n);
    
    i = 2;
    
    while(i <= n/2)
    {
        // check for non prime number
        if(n%i == 0)
        {
            count=1;
            break;
        }
        i++;
    }
 
    if (count == 0)
        printf("%d es primo.\n\n", n);
    else
        printf("%d no es primo.\n\n", n);
 
    
	printf("%c\n\n", getch()); 
	return 0;
}

