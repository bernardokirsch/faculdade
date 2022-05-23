/* 
Autor: Bernardo Gularte Kirsch
01) Faça um programa que leia um número inteiro e mostre uma mensagem indicando se o número
é par ou ímpar, e se é positivo ou negativo.
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	int num;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf (" Informe um número inteiro: ");
	scanf  ("%d", &num);
	
	if (num % 2 == 0) {
		printf ("\n O número é par");
	}
	else {
		printf ("\n O número é ímpar");
	}
	
	if (num <= 0) {
		printf (" e negativo");
	}
	else {
		printf (" e positivo");
	}
	
	getch ();
	
}
