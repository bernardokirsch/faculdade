#include <stdio.h>

void main (void) {
	float num1, num2;
	
	printf ("Informe 2 numeros: \n");
	scanf  ("%f", &num1);
	scanf  ("%f", &num2);
	
	if (num1 > num2) {
		printf ("Os numeros sao diferentes \n%.2f - %.2f", num1, num2);
	}
	else if (num1 < num2) {
		printf ("Os numeros sao diferentes \n%.2f - %.2f", num2, num1);
	}
	else {
		printf ("Os numeros sao iguais \n%.2f - %.2f", num1, num2);
	}
	
	getch ();
}
