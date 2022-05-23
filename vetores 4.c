#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, num [10], aux;
	
	for (i = 0; i < 10; i++) {
		printf (" \n Informe um número: ");
		scanf  ("%d", &num [i]);
	}
	
	printf ("\n Antes: ");
	
	for (i = 0; i < 10; i++) {
		printf ("%d  ", num [i]);
	}
	
	for (i = 0; i < 10; i++) {
		aux = num [i];
		num [i] = num [i+1];
		num [i+1] = aux;
	}
	
	printf ("\n Depois: "); 
	
	for (i = 0; i < 10; i++) {
		printf ("%d  ", num [i]);
	}
	
	getch ();
}
