/*
	Autor: Bernardo Gularte Kirsch
	2) Escreva um programa que receba letras informadas pelo usuário até que seja digitada a letra ‘w’.
	O programa deve mostrar no final de sua execução quantas das letras digitadas são vogais, quantas são consoantes e o total de letras digitadas.
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	char letra;
	int countVogal = 0, countConsoante = 0, countTotal;
	
	do {
		printf ("\n Informe uma letra: ");
		scanf  ("%s", &letra);
		
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			countVogal++;
		}
		else {
			countConsoante++;
		}
		
	} while (letra != 'w');
	
	countTotal = countVogal + countConsoante;
	
	printf ("\n O número de vogais informadas é de %d", countVogal);
	printf ("\n O número de consoantes informadas é de %d", countConsoante);
	printf ("\n O número total de letras informadas foi de %d", countTotal);
	
	getch();
	
}

