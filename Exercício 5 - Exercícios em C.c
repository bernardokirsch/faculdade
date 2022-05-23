#include <stdio.h>

void main (void) {
	int valor1, valor2, resultado;
	
	printf ("\n Informe o primeiro numero: ");
	scanf  ("%d", &valor1);
	
	printf ("\n Informe o segundo numero: ");
	scanf  ("%d", &valor2);
	
	resultado = pow(valor1, 2) + pow(valor2, 2);
	
	printf ("\n O resultado da soma dos quadrados dos numeros eh: %d", resultado);
	
	getch ();
}
