#include <stdio.h>

void main (void) {
	float fahrenheit, celsius;
	
	printf ("\n Informe a temperatura em Fahrenheit \n\n ");
	scanf  ("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5/9 ;
	
	printf ("\n A temperatura em Celsius eh %f", celsius);
	
	getch ();
}
