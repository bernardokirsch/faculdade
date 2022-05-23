#include <stdio.h>

void main (void) {
	int a = 0, b = 1, auxiliar, i = 1;
	
	printf ("\n Segue a sequencia dos 15 primeiros termos da sequencia de Fibonacci: \n");
	
	do { 
		printf (" %d \n", a);
		
		auxiliar = a + b;
    	a = b;
    	b = auxiliar;
    	
    	i++;
		
	} while (i <= 15);
	
  getch ();
}
