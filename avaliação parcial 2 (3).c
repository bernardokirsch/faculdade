/*
	Autor: Bernardo Gularte Kirsch
	3) Desenvolva um algoritmo que contenha dois vetores para armazenar valores inteiros, 
	sendo o primeiro com 5 elementos e o segundo com 8 elementos. 
	Os vetores devem ser preenchidos com valores aleatórios. 
	O programa ainda deve conter um terceiro vetor com 13 posições para armazenar a junção dos dois primeiros vetores. 
	Os valores dos 3 vetores devem ser apresentados na tela.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int i, vet1 [5], vet2 [8], vet3 [13];
	
	for (i = 0; i < 5; i++) {
		vet1 [i] = rand() % 10;
	}
	
	for (i = 0; i < 8; i++) {
		vet2 [i] = rand() % 10;
	}
	
	for (i = 0; i < 5; i++) {
		vet3 [i] = vet1 [i];
	}

	for (i = 0; i < 8; i++) {
		vet3 [5+i] = vet2 [i];
	}

	printf ("\n Vetor 1: ");
	for (i = 0; i < 5; i++) {
		printf ("  %d", vet1 [i]);
	}
	
	printf ("\n Vetor 2: ");
	for (i = 0; i < 8; i++) {
		printf ("  %d", vet2 [i]);
	}
	
	printf ("\n Vetor 3: ");
	for (i = 0; i < 13; i++) {
		printf ("  %d", vet3 [i]);
	}
	
	getch();
	
}

