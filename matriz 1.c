#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int i, j, matriz[4][4], soma = 0;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			matriz[i][j] = rand () % 100;
		}
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf ("  %d", matriz[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i > j) {
				soma = soma + matriz[i][j];	
			}
		}
	}
	
	printf ("\n A soma dos elementos abaixo da diagonal principal é: %d", soma);
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			soma = soma + matriz [i][j];
		}
	}
	
	printf ("\n\n A soma da matriz é: %d", soma);
	
	getch();
}
