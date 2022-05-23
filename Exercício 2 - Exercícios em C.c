#include <stdio.h>

void main (void) {
	float valor1, valor2;
	int result;
	
	printf ("\n Informe um valor \n\n ");
	scanf  ("%f", &valor1);
	printf ("\n Informe outro valor \n\n ");
	scanf  ("%f", &valor2);
	
	result = (valor1 != valor2);
	
	printf ("\n O resultado eh %f", result);
	
	getch ();
}
