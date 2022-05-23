#include <stdio.h>

void main (void) {
	char nome1 [30], nome2 [30];
	float altura1, altura2, peso1, peso2;
	
	printf ("Informe o nome da primeira pessoa: \n");
	scanf  ("%s", &nome1);
	
	printf ("\nInforme a altura da primeira pessoa: \n");
	scanf  ("%f", &altura1);
	
	printf ("\nInforme o peso da primeira pessoa: \n");
	scanf  ("%f", &peso1);
	
	printf ("\nInforme o nome da segunda pessoa: \n");
	scanf  ("%s", &nome2);
	
	printf ("\nInforme a altura da segunda pessoa: \n");
	scanf  ("%f", &altura2);
	
	printf ("\nInforme o peso da segunda pessoa: \n");
	scanf  ("%f", &peso2);
	
	if (peso1 > peso2 && altura1 > altura2) {
		printf ("\nMais pesado (a): %s \n", nome1);
		printf ("Mais alto (a): %s", nome1);
	}
	
	else if (peso1 > peso2 && altura1 < altura2) {
		printf ("\nMais pesado (a): %s \n", nome1);
		printf ("Mais alto (a): %s", nome2);
	}
		
	else if (peso1 < peso2 && altura1 > altura2) {
		printf ("\nMais pesado (a): %s \n", nome2);
		printf ("Mais alto (a): %s", nome1);
	}
	
	else {
		printf ("\nMais pesado (a): %s \n", nome2);
		printf ("Mais alto (a): %s", nome2);
	}
	
	getch ();
}

