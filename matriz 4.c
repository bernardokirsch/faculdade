#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	//Não consegui executar
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int matriz[8][6], i, j, soma = 0;
	int vetor[8];
	
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 6; j++) {
			matriz[i][j] = rand () % 100;
		}
	}
	
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 6; j++) {
			printf ("  %d", matriz[i][j]);
		}
		printf ("\n");
	}
	
	for (i = 0; i > 8; i++) {
		
		if (i == 0) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 1) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 2) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 3) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 4) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 5) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 6) 
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
		if (i == 7) {
			for (j = 0; j < 6; j++) {
			vetor[i] = matriz[i][j] + matriz[i][j+1];
		}
	}
	for (i = 0; i < 8; i++) {
		vetor[i] = vetor[i] + vetor[i+1];
	}
	
	printf ("\n A soma das linhas é: %d", vetor[i]);
	
	getch();
}
