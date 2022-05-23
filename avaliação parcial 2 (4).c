/*
	Autor: Bernardo Gularte Kirsch
	4) Escreva um programa que contenha uma matriz 5 x 7 para armazenar valores inteiros. 
	A matriz deve ser preenchida automaticamente com valores aleatórios. 
	O programa deve apresentar a matriz resultante e solicitar que o usuário informe uma linha e uma coluna. 
	Caso o usuário informe valores fora das dimensões da matriz, o programa deve apresentar uma mensagem de erro. 
	Caso o usuário informe valores de índices válidos, o programa deve informar o valor armazenado naquela posição e se o valor é par ou ímpar.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int i, j, matriz [5][7];
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++) {
			matriz [i][j] = rand() % 10;
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++) {
			printf (" %d  ", matriz [i][j]);
		}
		printf ("  \n");
	}
	
	printf ("\n Informe uma linha (de 1 a 5) da matriz acima: ");
	scanf  ("%d", &i);
	printf ("\n Informe uma coluna (de 1 a 7) da matriz acima: ");
	scanf  ("%d", &j);
	
	i--;
	j--;
	
	if (i >= 0 && i < 5 && j >= 0 && j < 7) {
		if (matriz [i][j] % 2 == 0) {
			printf ("\n A matriz [%d][%d] é par", i+1, j+1);
		}
		else {
			printf ("\n A matriz [%d][%d] é ímpar", i+1, j+1);
		}
		printf ("\n O valor da posição [%d][%d] da matriz é %d", i+1, j+1, matriz [i][j]);
	}
	else {
		printf ("\n ERRO! A LINHA INFORMADA DEVE SER DE 1 A 5 E A COLUNA INFORMADA DE 1 A 7!");
	}
	
	getch();
	
}

