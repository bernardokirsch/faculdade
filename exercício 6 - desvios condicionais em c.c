#include <stdio.h>

void main (void) {
	int num1, num2, mult;
	
	printf ("Informe dois numeros para saber se eles sao multiplos: \n\n");
	scanf ("%d", &num1);
	scanf ("%d", &num2);
	
	if (num1 % num2 == 0) {
		printf ("\nOs numeros sao multiplos");
	}
	else {
		printf ("\nOs numeros nao sao multiplos");
	}

	getch ();
		
}
