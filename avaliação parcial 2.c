/*
	Autor: Bernardo Gularte Kirsch 
	1) Faça um programa solicite que o usuário informe um número inteiro maior que zero e menor que 26. 
	Se o usuário informar um valor fora desse intervalo, o programa deve apresentar uma mensagem de erro. 
	Caso contrário, o programa deve apresentar todos os números inteiros de 1 até 100, substituindo os múltiplos do número informado pela palavra “pi”.
	Exemplo:
	Número informado: 3.
	Saída: 1 2 pi 4 5 pi 7 8 pi 10 11 pi 13 14 pi...
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int num, i;
	
	printf ("\n Informe um número inteiro maior que 0 e menor que 26: ");
	scanf  ("%d", &num);
	
	if (num > 0 && num < 26) {
		printf ("\n Aqui estão os 100 números inteiros de 1 à 100, onde, quando o número informado é múltiplo do número apresentado, o número apresentado é substituído por pi: \n");
		for (i = 1; i <= 100; i++) {
			if (i % num == 0) {
				printf (" pi ");
			}
			else {
				printf (" %d ", i);
			}
		}
	}
	else {
		printf ("\n ERRO! O NÚMERO INFORMADO DEVE SER MAIOR QUE 0 E MENOR QUE 26!");
	}
	getch ();
}
