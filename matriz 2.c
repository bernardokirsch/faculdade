#include <stdio.h>
#include <locale.h>
#include <time.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	srand (time(NULL));
	
	int matriz[5][5];
	int i, j, soma = 0;
	int opcao;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			matriz[i][j] = rand () % 100;
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf ("  %d", matriz[i][j]);
		}
		printf ("\n");
	}
	
	printf ("\n 1 - Soma dos elementos de uma linha \n");
	printf ("\n 2 - Soma dos elementos de uma coluna \n");
	printf ("\n 3 - Soma da diagonal principal \n");
	printf ("\n 4 - Soma da diagonal secundária \n");
	printf ("\n 5 - Soma de todos os elementos da matriz \n");
	
	printf ("\n Digite o número da opção escolhida: ");
	scanf ("%d", &opcao);
	
	i = 1;
	j = 1;
	
	switch (opcao) {
		
		case 1:
			
			printf ("\n Informe uma linha entre 1 e 5, para saber sua soma: ");
			scanf  ("%d", &i);
			i--;
			
			for (j = 0; j < 5; j++) {
				soma = soma + matriz[i][j];
			}
			
			printf ("\n A soma da linha %d é: %d", i+1, soma);
			
		break;
		
		case 2:
			
			printf ("\n Informe uma coluna entre 1 e 5 para saber sua soma: ");
			scanf  ("%d", &j);
			j--;
			
			for (i = 0; i < 5; i++) {
				soma = soma + matriz[i][j];
			}
			
			printf ("\n A soma da coluna %d é: %d", j+1, soma);
			
		break;
		
		case 3:
			
			for (i = 0; i < 5; i++) {
				soma = soma + matriz[i][i];
			}
			
			printf ("\n A soma da diagonal principal é: %d", soma);
			
		break;
		
		case 4:
			
			j = 4;
			
			for (i = 0; i < 5; i++) {
				soma = soma + matriz[i][j];
				j--;
			}
			
			printf ("\n A soma da diagonal secundária é: %d", soma);
			
		break;
		
		case 5:
			
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 5; j++) {
					soma = soma + matriz[i][j];
			}
		}
			printf ("\n A soma de todos os elementos da matriz é: %d", soma);
			
		break;
		
		default:
			
			printf ("\n Opção inválida");
			
		break;
	}
	
	getch();
}
