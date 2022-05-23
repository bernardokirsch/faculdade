#include <stdio.h>

void main (void) {
	float X, Y, Z, soma;
	
	printf ("\nInforme 3 numeros reais para X, Y e Z respectivamente: \n");
	scanf  ("%f", &X);
	scanf  ("%f", &Y);
	scanf  ("%f", &Z);
	
	soma = X + Y;
	
	if (soma < Z) {
		printf ("A soma de X e Y eh menor que Z");
	}
	else if (soma == Z) {
		printf ("A soma de X e Y eh igual a Z");
	}
	else {
		printf ("A soma de X e Y eh maior que Z");
	}
		
	
	getch ();
}
