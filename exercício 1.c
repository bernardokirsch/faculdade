/* 
Autor: Bernardo Gularte Kirsch
01) Fa�a um programa que leia um n�mero inteiro e mostre uma mensagem indicando se o n�mero
� par ou �mpar, e se � positivo ou negativo.
*/

#include <stdio.h>
#include <locale.h>

void main (void) {
	int num;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf (" Informe um n�mero inteiro: ");
	scanf  ("%d", &num);
	
	if (num % 2 == 0) {
		printf ("\n O n�mero � par");
	}
	else {
		printf ("\n O n�mero � �mpar");
	}
	
	if (num <= 0) {
		printf (" e negativo");
	}
	else {
		printf (" e positivo");
	}
	
	getch ();
	
}
