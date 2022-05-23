#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int i, carros[30], maior, menor, posMaior, posMenor;
	
	for (i = 0; i < 30; i++) {
		carros [i] = rand() % 1000;
		//printf ("\n Informe o número de carros passados no dia %d: ", i+1);
		//scanf  ("%d", &carros[i]);
	}
	
	maior = carros [0];
	posMaior = 0;
	
	for (i = 0; i < 30; i++) {
		if (carros [i] > maior) {
			maior = carros [i];
			posMaior = i;
		}
	}
	
	printf ("\n O maior volume de carros foi dia %d e foi de %d carros", posMaior+1, maior);
	
	menor = carros [0];
	posMenor = 0;
	
	for (i = 0; i < 30; i++) {
		if (carros [i] < menor) {
			menor = carros [i];
			posMenor = i;
		}
	}
	
	printf ("\n O menor volume de carros foi dia %d e foi de %d carros", posMenor+1, menor);
	
	getch ();
}
