/*
	Autor: Bernardo Gularte Kirsch
	2) Escreva um programa que receba letras informadas pelo usu�rio at� que seja digitada a letra �w�.
	O programa deve mostrar no final de sua execu��o quantas das letras digitadas s�o vogais, quantas s�o consoantes e o total de letras digitadas.
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
	
	printf ("\n O n�mero de vogais informadas � de %d", countVogal);
	printf ("\n O n�mero de consoantes informadas � de %d", countConsoante);
	printf ("\n O n�mero total de letras informadas foi de %d", countTotal);
	
	getch();
	
}

