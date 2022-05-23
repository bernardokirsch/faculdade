#include <stdio.h>
#include <locale.h>

void media () {
	int i;
	float notas[10], mediaNotas = 0;
	
	printf ("\n Informe 10 notas: \n");
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe a nota %d: ", i+1);
		scanf  ("%f", &notas[i]);
	}
	
	for (i = 0; i < 10; i++) {
		mediaNotas = mediaNotas + notas[i];
	}
	
	mediaNotas = mediaNotas / 10;
	
	printf ("\n A média das notas é %.2f", mediaNotas);
}

void somatorio () {
	int i, somaNotas = 0;
	float notas[10];
	
	printf ("\n Informe 10 notas: \n");
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe a nota %d: ", i+1);
		scanf  ("%f", &notas[i]);
	}
	
	for (i = 0; i < 10; i++) {
		somaNotas = somaNotas + notas[i];
	}
	
	printf ("\n O somatório das notas é %.2d", somaNotas);
}

void maior () {
	int i;
	float notas[10], maior;
	
	printf ("\n Informe 10 notas: \n");
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe a nota %d: ", i+1);
		scanf  ("%f", &notas[i]);
	}
	
	maior = notas[0];
	
	for (i = 0; i < 10; i++) {
		if (notas[i] > maior) {
			maior = notas[i];
		}
	}
	
	printf ("\n A maior nota é %.2f", maior);
}

void menor () {
	int i;
	float notas[10], menor;
	
	printf ("\n Informe 10 notas: \n");
	
	for (i = 0; i < 10; i++) {
		printf ("\n Informe a nota %d: ", i+1);
		scanf  ("%f", &notas[i]);
	}
	
	menor = notas[0];
	
	for (i = 0; i < 10; i++) {
		if (notas[i] < menor) {
			menor = notas[i];
		}
	}
	
	printf ("\n A menor nota é %.2f", menor);
}

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int op;
	
	printf ("\n -----> ALGORITMO QUE CALCULA A MÉDIA, SOMATÓRIO, MAIOR NOTA E MENOR NOTA DE 10 NOTAS <----- \n");
	printf ("\n 1 - Média das notas");
	printf ("\n 2 - Somatório das notas");
	printf ("\n 3 - Maior nota");
	printf ("\n 4 - Menor nota");
	printf ("\n 0 - Finalizar o programa");
	printf ("\n\n Digite a opção de sua escolha: ");
	scanf  ("%d", &op);
	
	switch (op) {
		
		case 1: 
			printf ("\n -> Média das notas <- \n ");
			media ();
		break;
	
		case 2:
			printf ("\n -> Somatório das notas <- \n ");
			somatorio ();
		break;
		
		case 3: 
			printf ("\n -> Maior nota <- \n ");
			maior ();
		break;
		
		case 4: 
			printf ("\n -> Menor nota <- \n ");
			menor ();
		break;
		
		case 0: 
			printf ("\n O programa foi finalizado!");
		break;
		
		default: 
			printf ("\n Opção inválida!");
		break;
	}
	
	getch ();
}


