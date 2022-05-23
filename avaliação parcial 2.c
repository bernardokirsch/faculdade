/*
	Autor: Bernardo Gularte Kirsch 
	1) Fa�a um programa solicite que o usu�rio informe um n�mero inteiro maior que zero e menor que 26. 
	Se o usu�rio informar um valor fora desse intervalo, o programa deve apresentar uma mensagem de erro. 
	Caso contr�rio, o programa deve apresentar todos os n�meros inteiros de 1 at� 100, substituindo os m�ltiplos do n�mero informado pela palavra �pi�.
	Exemplo:
	N�mero informado: 3.
	Sa�da: 1 2 pi 4 5 pi 7 8 pi 10 11 pi 13 14 pi...
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int num, i;
	
	printf ("\n Informe um n�mero inteiro maior que 0 e menor que 26: ");
	scanf  ("%d", &num);
	
	if (num > 0 && num < 26) {
		printf ("\n Aqui est�o os 100 n�meros inteiros de 1 � 100, onde, quando o n�mero informado � m�ltiplo do n�mero apresentado, o n�mero apresentado � substitu�do por pi: \n");
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
		printf ("\n ERRO! O N�MERO INFORMADO DEVE SER MAIOR QUE 0 E MENOR QUE 26!");
	}
	getch ();
}
